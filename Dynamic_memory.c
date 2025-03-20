#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers using malloc

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Taking user input for 5 integers
    for (int i = 0; i < 5; i++) {
        printf("Enter the number: ");
        scanf("%d", &ptr[i]);
    }

    // Reallocate memory to hold 6 integers
    int *temp = realloc(ptr, 6 * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed\n");
        free(ptr); // free old memory if realloc fails
        return 1;
    }
    ptr = temp;

    // Assigning a new value to the newly allocated block
    int n;
    printf("Enter the next value to check the Realloc function: ");
    scanf("%d", &n);
    ptr[5] = n;  // Store the value at the 6th position (index 5)

    // Printing the values after realloc
    printf("\nValues after realloc:\n");
    for (int i = 0; i < 6; i++) {
        printf("Value %d: %d\n", i + 1, ptr[i]);
    }

    // ✅ Using calloc to allocate memory for 5 integers (initialized to 0)
    int *cptr = (int *)calloc(5, sizeof(int));
    if (cptr == NULL) {
        printf("Calloc allocation failed\n");
        free(ptr);
        return 1;
    }

    // Now take user input for calloc values
    printf("\nEnter 5 numbers for the calloc array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &cptr[i]);
    }

    // Display the values entered in calloc array
    printf("\nValues entered in the calloc array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Calloc Value %d: %d\n", i + 1, cptr[i]);
    }

    // Free allocated memory
    free(ptr);
    free(cptr);

    return 0;
}
