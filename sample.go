package main

import(
  "fmt"

  "github.com/golang/protobuf/proto"
  "github.com/TykTechnologies/tyk/coprocess"
)

func ExchangeSerializedMessage(object *coprocess.Object) {
  objectBytes, _ := proto.Marshal(object)
  fmt.Println(1,objectBytes)
  StandardProcessRequest()
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
}
