fn main() {
    // Infinite Loop with 'loop'
    // Syntax:
    // loop { }
    // The 'loop' is an infinite loop that can be controlled with a 'break' statement.

    let mut i = 1;
    loop {
        if i > 5 {
            break;              // Exits the loop when i is greater than 5
        }
        println!("{}", i);      // Prints numbers 1 through 5
        i += 1;                 // Increment i after each iteration
    }

    // For Loop with Range
    // Syntax:
    // for variable in range(start..end) { }
    // The 'for' loop is used to iterate over a range of values (start..end).

    for i in 1..6 {
        println!("{}", i);  // Prints numbers 1 through 5
    }

    // While Loop
    // Syntax:
    // while condition { }
    // The 'while' loop is used when the number of iterations is not known and depends on a condition.

    let mut j = 1;          // Changed the variable name from i to j to avoid conflict
    while j <= 5 {
        println!("{}", j);  // Prints numbers 1 through 5
        j += 1;             // Increment j after each iteration
    }

    // For Loop with Break and Continue
    // 'continue' skips the current iteration, 'break' exits the loop.

    for i in 1..6 {
        if i == 3 {
            continue;       // Skip iteration when i is 3
        }
        if i == 5 {
            break;          // Exit loop when i is 5
        }
        println!("{}", i);  // Prints numbers 1, 2, 4 (skips 3 and stops before printing 5)
    }
}