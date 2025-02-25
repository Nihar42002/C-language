#include <stdio.h>  // Include standard input-output library

int main() 
{
    int col, row;  // Loop variables for iteration
    int x, y;      // Variables to store user input for number of columns and rows

    // Taking user input for the number of columns and rows
    printf("Enter The Number Of Columns: ");
    scanf("%d", &x);
    
    printf("Enter The Number Of Rows: ");
    scanf("%d", &y);

    // Loop to iterate through each column
    for (col = 1; col <= x; col++) 
    {
        // Loop to iterate through each row
        for (row = 1; row <= y; row++) 
        {
            // Condition to print '@' at the boundary (first & last row/column)
            if (row == 1 || row == y || col == 1 || col == x) 
            {
                printf("@ ");
            } 
            else
            {
                printf("  ");  // Print spaces inside the box
            }
        }
        printf("\n");  // Move to the next line after completing a row
    }

    return 0;  // Exit the program
}
