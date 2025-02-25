#include <stdio.h>  // Include standard input-output library

int main() 
{
    int i, j;          // Declare integer variables for loop counters
    char ch = 'A';     // Initialize character variable with 'A'

    // Outer loop: Controls the number of rows (starting from 5 and decreasing to 1)
    for (i = 5; i >= 1; i--) 
    {
        
        // Inner loop: Prints the character 'ch' 'i' times in each row
        for (j = 1; j <= i; j++) 
        {
            printf("%c", ch);  // Print the current character
        }

        printf("\n");  // Move to the next line after printing a row
        ch++;  // Move to the next character in the alphabet (A → B → C...)
    }

    return 0;  // Exit the program successfully
}
