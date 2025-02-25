#include<stdio.h>

// Function to calculate the sum of the series: 1 + 1/2 + 1/3 + ... + 1/n
double sum(int n)
{
    if (n == 1)  // Base case: when n reaches 1, return 1.0
        return 1.0;

    return 1.0 / n + sum(n - 1); // Recursive call to sum(n-1) while adding 1/n
}

int main()
{
    int num;

    // Prompt the user to enter a number
    printf("Enter the Number =");
    scanf("%d", &num);

    // Validate input to ensure the number is positive
    if (num <= 0)
    {
        printf("Sum of Series is not defined for this number.\n");
    }
    else
    {
        // Call the recursive function and display the result
        printf("Sum of Series of %d will be = %lf\n", num, sum(num));
    }

    return 0;
}
