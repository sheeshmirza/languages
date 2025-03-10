package main

import "fmt"

func main() {
	// The 'const' keyword ensures that 'x' cannot be reassigned, making it immutable.
	const x = 10
	fmt.Printf("Immutable x is %d\n", x)
	// Variables in Go are mutable by default and can be reassigned.
	var y = 10
	fmt.Printf("Mutable y is %d\n", y)
	y = 20 // Reassigning 'y'
	fmt.Printf("Mutable y is %d\n", y)
}
