#include<stdio.h>

int main()
{
    int r, rev = 0, a, b, no;

    // Prompt user to enter a number
    printf("Enter Any Number=");
    scanf("%d", &no);

    // Extract the last digit of the number
    a = no % 10;

    // Reverse the number using a while loop
    while (no >= 1)
    {
        r = no % 10;        // Extract the last digit
        rev = (rev * 10) + r; // Build the reversed number
        no = no / 10;       // Remove the last digit from the original number
    }

    // Extract the first digit from the reversed number
    b = rev % 10;

    // Print the sum of the first and last digit
    printf("Addition=%d", a + b);

    return 0;
}
