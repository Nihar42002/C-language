#include<stdio.h>
int main()
{
    int i;
    char a[30];
    printf("Enter String: ");
    fgets(a, sizeof(a), stdin); // Safe input



    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }

    printf("\n Coverted String=%s",a);

    return 0;
}