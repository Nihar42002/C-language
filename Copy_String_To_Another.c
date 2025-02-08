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
     b[i]='\0';

     printf("\nCopy String: %s", b);

     return 0;
    }