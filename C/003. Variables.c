#include <stdio.h>

int main() {
    // The 'const' keyword ensures that 'x' cannot be reassigned, making it immutable.
    // It also prevents modification after initialization.
    const int x = 10;
    printf("Immutable x is %d\n", x);
    // Variables in C are mutable by default and can be reassigned.
    int y = 10;
    printf("Mutable y is %d\n", y);
    y = 20; // Reassigning 'y'
    printf("Mutable y is %d\n", y);
    return 0;
}
