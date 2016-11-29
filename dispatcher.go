package main

/*
#include <stdlib.h>
#include "dispatcher.h"
#include "middleware/middleware.h"
*/
import "C"

import (
	"errors"
	"unsafe"

	"github.com/TykTechnologies/tyk/coprocess"
	"github.com/golang/protobuf/proto"
)

// LoadMiddleware performs a dlopen call.
func LoadMiddleware() (err error) {
	var result C.int
	result = C.load_middleware()
	if result == 1 {
		err = errors.New("Couldn't load middleware")
	}
	return err
}

// LoadSymbols performs multiple dlsym calls.
func LoadSymbols() (err error) {
	var result C.int
	result = C.load_symbols()
	if result == 1 {
		err = errors.New("Couldn't load symbols")
	}
	return err
}

// StandardProcessRequest wraps a symbol.
func StandardProcessRequest(serializedObject []byte) (newObject coprocess.Object) {
	CSerializedObject := C.CBytes(serializedObject)
	// var CSerializedOutputObject C.struct_CP_OBJECT
	CSerializedOutputObject := C.standard_process_request(CSerializedObject)
	var serializedOutputObject []byte
	serializedOutputObject = C.GoBytes(CSerializedOutputObject.p_data, CSerializedOutputObject.length)
	proto.Unmarshal([]byte(serializedOutputObject), &newObject)
	// fmt.Println("StandardProcessRequest OUTPUT =", newObject, fmt.Sprintf("(len = %d)", len(serializedOutputObject)))
	C.free(CSerializedOutputObject.p_data)
	return newObject
}

func DirectProcessRequest(object *coprocess.Object) (newObject *coprocess.Object) {
	var nativeObject *C.struct_CP_OBJECT
	nativeObject = (*C.struct_CP_OBJECT)(C.malloc(C.size_t(unsafe.Sizeof(C.struct_CP_OBJECT{}))))
	bHookName := []byte(object.HookName)
	CHookName := C.CBytes(bHookName)
	nativeObject.hook_name = (*C.char)(CHookName)

	C.direct_process_request(nativeObject)
	object.HookName = C.GoString(nativeObject.hook_name)
	return object
}
