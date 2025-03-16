#include <stdio.h>

int main() {
    // For Loop
    // Syntax: 
    // for (initialization; condition; increment/decrement) { }
    // The 'for' loop is used when the number of iterations is known beforehand.
    
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);  // Prints numbers 1 through 5
    }
    
    // While Loop
    // Syntax: 
    // while (condition) { }
    // The 'while' loop is used when the number of iterations is not known and depends on a condition.
    
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);  // Prints numbers 1 through 5
        i++;                // Increment i after each iteration
    }
    
    // Do-While Loop
    // Syntax: 
    // do { } while (condition);
    // The 'do-while' loop ensures that the loop body is executed at least once, even if the condition is false initially.
    
    int j = 1;
    do {
        printf("%d\n", j);  // Prints numbers 1 through 5
        j++;                // Increment j after each iteration
    } while (j <= 5);
    
    // Break and Continue
    // 'break' is used to exit the loop prematurely.
    // 'continue' is used to skip the current iteration and proceed to the next one.
    
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;       // Skips the iteration when i is 3
        }
        if (i == 5) {
            break;          // Exits the loop when i is 5
        }
        printf("%d\n", i);  // Prints numbers 1 through 2 (skips 3 and stops before 5)
    }
    
    // Goto Statement
    // Syntax: 
    // label_name:
    // goto label_name;
    // The 'goto' statement unconditionally jumps to the specified label. It's not recommended for regular use due to readability concerns.
    
    int k = 1;
    start:
    if (k <= 5) {
        printf("%d\n", k);  // Prints numbers 1 through 5
        k++;
        goto start;         // Jumps back to the 'start' label
    }

    return 0;
}