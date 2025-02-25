#include <stdio.h>  // Include standard input-output library

int main() {
    int i, check = 1, n;  // Declare integer variables, check is initially set to 1 (assuming number is prime)

    // Prompt user for input
    printf("Enter the number: ");
    scanf("%d", &n);  // Read an integer from the user

    // Check if the number is less than or equal to 1 (not prime)
    if (n <= 1) 
    {
        check = 0;  // Set check to 0 because numbers <= 1 are not prime
    } 
    else 
    {
        // Loop to check for divisibility from 2 to n-1
        for (i = 2; i < n; i++) 
        {
            if (n % i == 0)  // If n is divisible by any number in this range
            { 
                check = 0;  // Set check to 0 (not a prime number)
                break;  // Exit the loop early since we found a divisor
            }
        }
    }

    // Output the result
    if (check == 1) 
    {
        printf("Given Number is a Prime number\n");  // If check is still 1, it's prime
    } 
    else
    {
        printf("Given Number is NOT a Prime number\n");  // Otherwise, it's not prime
    }

    return 0;  // Exit the program successfully
}
