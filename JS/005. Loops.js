// For Loop
// Syntax:
// for (initialization; condition; increment/decrement) { }
// The 'for' loop is used when the number of iterations is known beforehand.

for (let i = 1; i <= 5; i++) {
    console.log(i);  // Prints numbers 1 through 5
}

// While Loop
// Syntax:
// while (condition) { }
// The 'while' loop is used when the number of iterations is not known and depends on a condition.

let i = 1;
while (i <= 5) {
    console.log(i);     // Prints numbers 1 through 5
    i++;                // Increment i after each iteration
}

// Do-While Loop
// Syntax:
// do { } while (condition);
// The 'do-while' loop ensures that the loop body is executed at least once, even if the condition is false initially.

let j = 1;
do {
    console.log(j);     // Prints numbers 1 through 5
    j++;                // Increment j after each iteration
} while (j <= 5);

// For-In Loop
// Syntax:
// for (key in object) { }
// The 'for-in' loop is used to iterate over the properties (keys) of an object.

let person = { name: "Sheesh", age: 15 };
for (let key in person) {
    console.log(key + ": " + person[key]);  // Prints key-value pairs of the object
}

// For-Of Loop
// Syntax:
// for (value of iterable) { }
// The 'for-of' loop is used to iterate over the values of an iterable object (such as an array).

let numbers = [1, 2, 3, 4, 5];
for (let num of numbers) {
    console.log(num);  // Prints each value in the array
}

// Break and Continue
// 'break' is used to exit the loop prematurely, and 'continue' skips the current iteration.

for (let i = 1; i <= 5; i++) {
    if (i === 3) continue;  // Skip when i is 3
    if (i === 5) break;     // Exit loop when i is 5
    console.log(i);         // Prints numbers 1 through 2 (skips 3 and stops before 5)
}