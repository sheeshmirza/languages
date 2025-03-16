class Main {
    public static void main(String[] args) {
        // For Loop
        // Syntax: 
        // for (initialization; condition; increment/decrement) { }
        // The 'for' loop is used when the number of iterations is known beforehand.

        for (int i = 1; i <= 5; i++) {
            System.out.println(i); // Prints numbers 1 through 5
        }

        // While Loop
        // Syntax: 
        // while (condition) { }
        // The 'while' loop is used when the number of iterations is not known and depends on a condition.

        int i = 1;
        while (i <= 5) {
            System.out.println(i);  // Prints numbers 1 through 5
            i++;                    // Increment i after each iteration
        }

        // Do-While Loop
        // Syntax: 
        // do { } while (condition);
        // The 'do-while' loop ensures that the loop body is executed at least once, even if the condition is false initially.

        int j = 1;
        do {
            System.out.println(j);  // Prints numbers 1 through 5
            j++;                    // Increment j after each iteration
        } while (j <= 5);

        // Enhanced For Loop (Range-based loop)
        // Syntax:
        // for (data_type variable : container) { }
        // The enhanced 'for' loop is used to iterate over collections like arrays, lists, etc.

        int[] numbers = {1, 2, 3, 4, 5};
        for (int num : numbers) {
            System.out.println(num); // Prints each element of the array
        }

        // Break and Continue
        // 'break' is used to exit the loop prematurely.
        // 'continue' is used to skip the current iteration and proceed to the next one.

        for (int k = 1; k <= 5; k++) {
            if (k == 3) continue;   // Skips the iteration when k is 3
            if (k == 5) break;      // Exits the loop when k is 5
            System.out.println(k);  // Prints numbers 1 through 2 (skips 3 and stops before 5)
        }
    }
}