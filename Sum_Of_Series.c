#include<stdio.h>

int main()
{
    int i, n, p, s = 0;  // Declare variables (i for loop, n for input, p for square, s for sum)

    // Prompt the user to enter the range till which the sum of squares is required
    printf("Enter the number Till Where You Want to do Sum = ");
    scanf("%d", &n);

    // Loop to calculate the sum of squares from 1 to n
    for (i = 1; i <= n; i++)
    {
        p = i * i;  // Compute the square of the current number
        s = s + p;  // Add the square to the sum
    }

    // Display the final sum
    printf("Answer = %d", s);
    
    return 0;  // Return 0 to indicate successful execution
}
