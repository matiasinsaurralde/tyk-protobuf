package main
/*
#include "dispatcher.h"
*/
import "C"

import(
  "errors"
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
func StandardProcessRequest() {
  C.standard_process_request()
}
