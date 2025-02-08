#include <stdio.h>

int main() 
{
    char a[30], b[30];
    int i,j;

    printf("Enter String: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter String: ");
    fgets(b, sizeof(b), stdin);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='\n')
        {
        a[i]='\0';  
        break ;  
        }
    }
    for(j=0;b[j]!='\0';j++)
    {
        if(b[j]=='\n')
        {
        b[j]='\0'; 
        break ;   
        }
    }

    for(j=0;b[j]!='\0';j++,i++)
    {
a[i]=b[j];
    }

    a[i]='\0';



    printf("Concate String : %s",a);

    return 0;
}