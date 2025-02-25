#include <stdio.h>  // Include standard input-output library

int main() {
    int no, r, rev = 0, a;  // Declare integer variables

    // Prompt the user to enter a number
    printf("Enter The Number = ");
    scanf("%d", &no);  // Read the number from user input

    a = no;  // Store the original number for later comparison

    // Reverse the given number using a while loop
    while (no >= 1) 
    {
        r = no % 10;       // Extract the last digit of the number
        rev = (rev * 10) + r;  // Append the extracted digit to 'rev'
        no = no / 10;      // Remove the last digit from 'no'
    }

    // Check if the original number and reversed number are the same
    if (a == rev) 
    {
        printf("\nPalindrome number");  // The number is a palindrome
    } 
    else 
    {
        printf("\nNot a Palindrome number");  // The number is not a palindrome
    }

    return 0;  // Exit the program successfully
}
