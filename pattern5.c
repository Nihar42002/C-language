#include <stdio.h>  // Include standard input-output library

int main() 
{
    int i, j;  // Declare integer variables for loop counters

    // Outer loop: Controls the number of rows (starting from 5 and decreasing to 1)
    for (i = 5; i >= 1; i--) 
    {
        
        // Inner loop: Prints the value of 'i' 'i' times in each row
        for (j = 1; j <= i; j++) 
        {
            printf("%d", i);  // Print the current row number
        }

        printf("\n");  // Move to the next line after printing a row
    }

    return 0;  // Exit the program successfully
}
