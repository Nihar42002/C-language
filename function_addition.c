#include <stdio.h>  // Include standard input-output library

// Function prototype declarations
int add(int, int);   // Function to return the sum of two integers
float addi(int, int); // Function to return the sum as a floating-point value

int main() 
{
    char d[30];  // Unused character array (can be removed)
    int a, b, c, i;  // Integer variables
    float p, h, k;   // Floating-point variables

    // Taking user input for two numbers
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Enter number: ");
    scanf("%d", &b);

    p = a;  // Assigning integer 'a' to float variable 'p'
    h = b;  // Assigning integer 'b' to float variable 'h'

    // Function calls
    c = add(a, b);   // Call integer addition function
    k = addi(p, h);  // Call floating-point addition function

    // Displaying results
    printf("\n Addition (int): %d", c);
    printf("\n Addition (float): %.2f", k);

    return 0;  // Exit the program successfully
}

// Function to add two integers and return the result
int add(int a, int b) 
{
    int c;
    c = a + b;
    return c;
}

// Function to add two integers and return the result as a float
float addi(int p, int h) 
{
    float k;
    k = p + h;
    return k;
}
