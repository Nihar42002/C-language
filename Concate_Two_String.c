#include <stdio.h>

int main() 
{
    char a[30], b[30];
    int i,j;

    printf("Enter String: "); // Enter the string value.
    fgets(a, sizeof(a), stdin);

    printf("Enter String: ");// Enter the string value.
    fgets(b, sizeof(b), stdin);

// Loop to remove the newline character from the string if present
    for(i=0;a[i]!='\0';i++)  // Iterate through each character until the null terminator ('\0')
    {
        if(a[i]=='\n')// Check if the current character is a newline ('\n')
        {
        a[i]='\0';  // Replace the newline character with a null terminator to truncate the string 
        break ;  // Exit the loop since we only need to remove the first newline encountered
        }
    }
    for(j=0;b[j]!='\0';j++) // Same as per previus loop
    {
        if(b[j]=='\n')
        {
        b[j]='\0'; 
        break ;   
        }
    }

    for(j=0;b[j]!='\0';j++,i++) // Join the both string.
    {
a[i]=b[j];
    }

    a[i]='\0';



    printf("Concate String : %s",a);

    return 0;
}