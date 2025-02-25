#include <stdio.h>  // Include standard input-output library

int main()
 {
    int i, j;  // Declare integer variables for loop counters

    // Outer loop: Controls the number of rows (5 rows in total)
    for (i = 1; i <= 5; i++) 
    {
        // Inner loop: Controls the number of '*' printed in each row
        for (j = 1; j <= i; j++) 
        {
            printf("*");  // Print '*' without a newline
        }
        printf("\n");  // Move to the next line after printing '*' in a row
    }

    return 0;  // Exit the program successfully
}
