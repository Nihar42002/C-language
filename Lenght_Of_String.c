#include <stdio.h>

int main() 
{
    char a[30], b[30];
    int i;

    printf("Enter String: ");
    fgets(a, sizeof(a), stdin); // Safe input

    for(i = 0; a[i] != '\0'; i++)
     {
        b[i]=a[i]; // Copy characters
     }

    b[i]='\0'; // Null-terminate the copied string

    printf("\nReturn String: %s", b);
    printf("\nLength: %d", i - 1); // Adjust for newline character in fgets

    return 0;
}