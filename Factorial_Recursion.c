#include <stdio.h>  // Include standard input-output library

// Function to calculate the factorial of a number using recursion
int factorial(int n)
{
    if (n == 0 || n == 1)  // Base case: factorial of 0 or 1 is 1
        return 1;

    return n * factorial(n - 1);  // Recursive case: n * factorial(n-1)
}

int main() 
{
    int num;  // Variable to store user input

    // Prompt user to enter a number
    printf("Enter the Number = ");
    scanf("%d", &num);  // Read integer input from user

    // Check if the number is negative
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");  // Factorial is undefined for negative numbers
    } 
    else
    {
        // Calculate and display the factorial of the entered number
        printf("Factorial of %d will be = %d\n", num, factorial(num));
    }

    return 0;  // Return 0 to indicate successful execution
}
