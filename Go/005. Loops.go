package main

import "fmt"

func main() {
	// Infinite Loop with Break
	// Syntax:
	// for { }
	// The 'for' loop is used without a condition, creating an infinite loop until manually broken.

	for {
		fmt.Println("This is an infinite loop.")
		break // Stop the loop after one iteration
	}

	// Standard For Loop
	// Syntax:
	// for initialization; condition; increment/decrement { }
	// A standard for loop is used when the number of iterations is known beforehand.

	for i := 1; i <= 5; i++ {
		fmt.Println(i) // Prints numbers 1 through 5
	}

	// While Loop Equivalent
	// Syntax:
	// for condition { }
	// Go does not have a 'while' keyword, but the 'for' loop can be used as a 'while' loop by omitting the initialization and increment/decrement.

	i := 1
	for i <= 5 {
		fmt.Println(i) // Prints numbers 1 through 5
		i++            // Increment i after each iteration
	}

	// Range-Based For Loop
	// Syntax:
	// for index, value := range container { }
	// The range-based 'for' loop is used to iterate over elements in a container like an array or slice.

	numbers := []int{1, 2, 3, 4, 5}
	for index, value := range numbers {
		fmt.Println(index, value) // Prints index and value for each element in the slice
	}

	// Break and Continue
	// 'break' exits the loop completely, while 'continue' skips the current iteration and moves to the next.

	for i := 1; i <= 5; i++ {
		if i == 3 {
			continue // Skip when i is 3
		}
		if i == 5 {
			break // Exit loop when i is 5
		}
		fmt.Println(i) // Prints numbers 1 through 2 (skips 3 and stops before 5)
	}

	// Goto Statement
	// Syntax:
	// label_name:
	// goto label_name;
	// The 'goto' statement unconditionally jumps to the specified label. It is not recommended in most cases as it reduces readability.

	i = 1
LOOP:
	if i <= 5 {
		fmt.Println(i) // Prints numbers 1 through 5
		i++
		goto LOOP // Jumps back to the 'LOOP' label
	}
}
