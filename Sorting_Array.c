#include <stdio.h>  // Include standard input-output library

int main() 
{
    int i, j, t, a[5];  // Declare variables: i, j for loops, t for swapping, and array a[5]

    // Loop to take input from the user
    for (i = 0; i < 5; i++) 
    {
        printf("Enter the number: ");
        scanf("%d", &a[i]);  // Store user input in array
    }

    // Sorting the array using Bubble Sort or Selection Sort logic
    for (i = 0; i < 5; i++) 
    {
        for (j = i + 1; j < 5; j++) 
        {  // Compare current element with next elements
            if (a[i] > a[j]) 
            {  // Swap if current element is greater than next element
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    // Printing the sorted array
    for (i = 0; i < 5; i++) 
    {
        printf("\n Answer: %d", a[i]);  // Display sorted elements
    }

    return 0;  // Exit the program
}
