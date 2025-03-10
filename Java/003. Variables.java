class Main {
    public static void main(String[] args) {
        // The 'final' keyword ensures that 'x' cannot be reassigned, making it immutable.
        // It also prevents modification after initialization.
        final int x = 10;
        System.out.println("Immutable x is " + x);
        // Variables in Java are mutable by default and can be reassigned.
        int y = 10;
        System.out.println("Mutable y is " + y);
        y = 20; // Reassigning 'y'
        System.out.println("Mutable y is " + y);
    }
}
