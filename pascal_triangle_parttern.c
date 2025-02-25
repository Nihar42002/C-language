#include <stdio.h>  // Include standard input-output library

int main()
 {
    int rows, i, j, val;  // Declare variables

    // Prompt the user to enter the number of rows for Pascal's Triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);  // Read the number of rows from user input

    // Outer loop: Iterate through each row
    for (i = 0; i < rows; i++) 
    {
        // Inner loop 1: Print leading spaces for alignment
        for (j = 0; j < rows - i - 1; j++)
            printf("  ");  // Print spaces for right alignment

        val = 1;  // The first element in every row is always 1

        // Inner loop 2: Print numbers in the current row
        for (j = 0; j <= i; j++) 
        {
            printf("%4d ", val);  // Print the current value with formatting

            // Compute the next value using Pascal's Triangle formula:
            // val = val * (i - j) / (j + 1)
            val = val * (i - j) / (j + 1);
        }
        
        printf("\n");  // Move to the next line after printing a row
    }

    return 0;  // Exit the program successfully
}
