// The 'const' keyword ensures that 'x' cannot be reassigned, making it immutable within its block scope.
const x = 10;
console.log(`Immutable x is ${x}`);
// The 'let' keyword allows reassignment and has block-level scope for 'y'.
// This means 'y' can be updated, and its scope is confined to the block where it's declared.
let y = 10;
console.log(`Mutable y is ${y}`);
y = 20; // Reassigning 'y'
console.log(`Mutable y is ${y}`);
// The 'var' keyword allows reassignment but has function or global scope for 'z' (it does not have block-level scoping).
// This means 'z' is accessible throughout the function or globally if declared outside a function.
var z = 10;
console.log(`Mutable z is ${z}`);
z = 30; // Reassigning 'z'
console.log(`Mutable z is ${z}`);
