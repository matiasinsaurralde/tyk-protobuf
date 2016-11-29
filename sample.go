package main

import (
	"fmt"

	"net/http"

	"github.com/TykTechnologies/tyk/coprocess"
	"github.com/golang/protobuf/proto"
)

func ExchangeSerializedMessage(object *coprocess.Object) coprocess.Object {
	objectBytes, _ := proto.Marshal(object)
	// fmt.Println("StandardProcessRequest INPUT =", object, fmt.Sprintf("(len = %d)", len(objectBytes)))
	newObject := StandardProcessRequest(objectBytes)
	return newObject
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

	http.HandleFunc("/a", func(w http.ResponseWriter, r *http.Request) {
		object := coprocess.Object{
			HookName: "myhook",
		}
		newObject := ExchangeSerializedMessage(&object)
		w.Write([]byte(newObject.HookName))
	})

	http.HandleFunc("/b", func(w http.ResponseWriter, r *http.Request) {
		object := coprocess.Object{
			HookName: "myhook",
		}
		DirectProcessRequest(&object)
		w.Write([]byte(object.HookName))
	})

	http.HandleFunc("/c", func(w http.ResponseWriter, r *http.Request) {
		object := coprocess.Object{
			HookName: "myhook",
		}
		object.HookName = "thehook"
		w.Write([]byte(object.HookName))
	})
	http.ListenAndServe(":5555", nil)
}
