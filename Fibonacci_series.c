#include <stdio.h>  // Include standard input-output library

int main() 
{
    int n, a = 0, b = 1, next;  // Declare variables
    printf("Enter number of terms: ");  // Prompt the user to enter the number of Fibonacci terms
    scanf("%d", &n);  // Read the number of terms from user input

    // Loop to generate Fibonacci sequence up to n terms
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a);  // Print the current term

        next = a + b;  // Calculate the next term in the sequence
        a = b;  // Update 'a' to hold the previous 'b' value
        b = next;  // Update 'b' to hold the new next term
    }

    return 0;  // Exit the program successfully
}
