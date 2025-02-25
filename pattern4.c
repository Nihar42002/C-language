#include <stdio.h>  // Include standard input-output library

int main() 
{
    int i, j, k;  // Declare integer variables for loop counters

    // Outer loop: Controls the number of rows (5 rows in total)
    for (i = 1; i <= 5; i++) 
    {
        
        // Inner loop 1: Prints spaces before the stars for right alignment
        for (j = 1; j <= i; j++)
        {
            printf(" ");  // Print space
        }

        // Inner loop 2: Prints '*' in decreasing order
        for (k = 5; k >= i; k--) 
        {
            printf("*");  // Print '*'
        }

        printf("\n");  // Move to the next line after printing '*' in a row
    }

    return 0;  // Exit the program successfully
}
