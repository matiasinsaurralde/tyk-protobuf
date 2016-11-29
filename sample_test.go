package main

import (
	"fmt"
	"testing"

	"github.com/TykTechnologies/tyk/coprocess"
)

const (
	TIMES = 50000
)

func init() {
	fmt.Println("init")
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
}

func BenchmarkStandardApproach(b *testing.B) {
	object := coprocess.Object{
		HookName: "myhook",
	}
	var n int = 0
	for n < TIMES {
		ExchangeSerializedMessage(&object)
		n++
	}
}

func BenchmarkDirectApproach(b *testing.B) {
	object := coprocess.Object{
		HookName: "myhook",
	}
	var n int = 0
	for n < TIMES {
		ExchangeDirectObject(&object)
		n++
	}
}
