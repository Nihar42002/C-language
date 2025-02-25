#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;  // Variable to store the arithmetic operator
    float a, b;  // Variables to store user input numbers

label:  // Label for potential future use (not used in this version)
    
    // Prompt user for the first number
    printf("Enter the Number=");
    scanf("%f", &a);

    fflush(stdin); // Clears the input buffer to avoid issues with character input

    // Prompt user for the arithmetic operator
    printf("\nEnter the operator (+, -, *, /) = ");
    scanf(" %c", &ch);  // Notice the space before %c to avoid buffer issues

    // Prompt user for the second number
    printf("\nEnter the Number=");
    scanf("%f", &b);

    // Switch-case to perform the required arithmetic operation
    switch(ch)
    {
        case '+' : 
            printf("\nAddition = %.2f", a + b);
            break; 

        case '-' : 
            printf("\nSubtraction = %.2f", a - b);
            break;

        case '/' : 
            if (b != 0)  // Check to avoid division by zero
                printf("\nDivision = %.2f", a / b);
            else
                printf("\nError: Division by zero is not allowed.");
            break;

        case '*' : 
            printf("\nMultiplication = %.2f", a * b);
            break;

        default:
            printf("\nInvalid Operator! Please use +, -, *, or /.");
            break;
    }

    return 0;  // Indicating successful program execution
}
