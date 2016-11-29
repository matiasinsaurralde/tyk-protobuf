package main

import (
	"fmt"

	"github.com/TykTechnologies/tyk/coprocess"
	"github.com/golang/protobuf/proto"
)

func ExchangeSerializedMessage(object *coprocess.Object) {
	objectBytes, _ := proto.Marshal(object)
	// fmt.Println("StandardProcessRequest INPUT =", object, fmt.Sprintf("(len = %d)", len(objectBytes)))
	StandardProcessRequest(objectBytes)
}

func ExchangeDirectObject(object *coprocess.Object) {
	// fmt.Println("DirectProcessRequest INPUT =", object)
	DirectProcessRequest(object)
	// fmt.Println("DirectProcessRequest OUTPUT =", object)
}

func main() {
	fmt.Println("main")
	var err error
	err = LoadMiddleware()
	if err != nil {
		panic(err)
	}
	err = LoadSymbols()
	if err != nil {
		panic(err)
	}
	object := coprocess.Object{
		HookName: "myhook",
	}
	ExchangeSerializedMessage(&object)
	ExchangeDirectObject(&object)
}
