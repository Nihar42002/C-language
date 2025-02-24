#include <stdio.h>

int main()
{
    FILE *fptr, *even, *odd;

    fptr = fopen("text.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open text.txt\n");
        return 1; // Exit with error code
    }

    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if (even== NULL || odd == NULL) {
        printf("Error: Could not create output files\n");
        fclose(fptr);
        return 1;
    }

    char ch;

    // Write even ASCII characters to even.txt
    while ((ch = fgetc(fptr)) != EOF) {
        if (ch % 2 == 0) {
            fprintf(even, "%c", ch);
        } else {
            fprintf(odd, "%c\t", ch);
        }
    }

    // Close all files
    fclose(fptr);
    fclose(even);
    fclose(odd);

    printf("Characters have been separated into even.txt and odd.txt\n");

    return 0;
}
