fn main() {
    // The 'const' keyword defines a constant with a specified type. It is immutable and must be assigned a value at compile time.
    const X: i32 = 10;
    println!("Immutable X is {}", X);
    // The 'let' keyword creates a variable. By default, variables declared with 'let' are immutable.
    let y = 10;
    println!("Immutable y is {}", y);
    // The 'let mut' syntax allows 'z' to be reassigned, making it mutable.
    let mut z = 10;
    println!("Mutable z is {}", z);
    z = 20; // Reassigning 'z'
    println!("Mutable z is {}", z);
}
