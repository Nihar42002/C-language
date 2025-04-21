#include<stdio.h>

int main()
{
    float a, b, t;  // Declare three float variables: 'a' and 'b' for input, 't' for temporary storage

    // Prompt user for input values
    printf("Enter the Number A: ");
    scanf("%f", &a);
    printf("Enter the Number B: ");
    scanf("%f", &b);

    // Declare and initialize pointers to the addresses of 'a' and 'b'
    float *ptra = &a;
    float *ptrb = &b;

    // Swap values using pointers
    t = *ptra;   // Store the value of 'a' in temporary variable 't'
    *ptra = *ptrb; // Assign the value of 'b' to 'a'
    *ptrb = t;   // Assign the stored value of 'a' to 'b'

    // Display swapped values
    printf("\nA = %.2f\n",*ptra);
    printf("B = %.2f\n", *ptrb);

    return 0; // Return 0 to indicate successful execution
}
