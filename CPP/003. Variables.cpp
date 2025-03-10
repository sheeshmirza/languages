#include <iostream>

int main() {
    // The 'const' keyword ensures that 'x' cannot be reassigned, making it immutable.
    // It also prevents modification after initialization.
    const int x = 10;
    std::cout << "Immutable x is " << x << std::endl;
    // Variables in C++ are mutable by default and can be reassigned.
    int y = 10;
    std::cout << "Mutable y is " << y << std::endl;
    y = 20; // Reassigning 'y'
    std::cout << "Mutable y is " << y << std::endl;
    return 0;
}
