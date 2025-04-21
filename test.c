#include <stdio.h>

int main() {
    int x = 5, y, z;

    z = y = x;  // Assign the initial value of x (5) to both y and z.
    printf("%d\n", x); // Print the initial value of x (5).

    y -= x--; // Subtract the current value of x from y, then decrement x.
    // y = y - x; (y = 5 - 5 = 0)
    // x = x - 1; (x = 4)
    printf("%d\n", x); //prints x = 4
    printf("%d\n", y); //prints y = 0
    
    z -= --x; // Decrement x first, then subtract the new value of x from z.
    // x = x - 1; (x = 3)
    // z = z - x; (z = 5 - 3 = 2)
    printf("%d\n", x); //prints x = 3
    printf("%d\n", z); //prints z = 2

    z -= (--x) - (x--);
    /*
        --x: Decrement x before using its value (x becomes 2).
        x--: Use the current value of x (2) and then decrement it (x becomes 1).
        (--x) - (x--): 2 - 2 = 0.
        z = z - 0; (z = 2 - 0 = 2)
    */
    printf("%d\n", x); //prints x = 1
    printf("%d\n", z); //prints z = 2

    return 0;
}