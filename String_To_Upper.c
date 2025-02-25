#include <stdio.h>  // Include standard input-output library

int main() 
{
    int i;           // Variable for iteration
    char a[30];      // Character array (string) to store user input

    // Prompt user for input
    printf("Enter String: ");
    fgets(a, sizeof(a), stdin); // Using fgets() for safe input handling

    // Loop to convert lowercase letters to uppercase
    for (i = 0; a[i] != '\0'; i++) 
    {
        if (a[i] >= 'a' && a[i] <= 'z') 
        {  // Check if character is lowercase
            a[i] = a[i] - 32;  // Convert to uppercase by subtracting ASCII difference
        }
    }

    // Print the converted uppercase string
    printf("\nConverted String = %s", a);

    return 0;  // Exit the program
}
