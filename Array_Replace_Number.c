#include<stdio.h>
int main()
{
    int i,a[5],n,s=0,r;

    for(i=0;i<5;i++)
    {
        printf("Enter the Number=");
        scanf("%d",&a[i]);
    }

    printf("Enter the Specific Number=");
    scanf("%d",&n);

    for(i=0;i<5;i++)
    {
        if(n==a[i])
        {
          s++;  
        }
    }
    printf("Total Number Return In Array= %d",s);


     printf("\n\n Enter the Number To Replace=");
    scanf("%d",&r);

    for(i=0;i<5;i++)
    {
        if(n==a[i])
        {
            a[i]=r;
        }
        printf("\n New Number=%d",a[i]);
    }
 return 0;
}