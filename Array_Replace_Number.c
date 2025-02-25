#include<stdio.h>
int main()
{
    int i,a[5],n,s=0,r;

    for(i=0;i<5;i++)
    {
        printf("Enter the Number="); // decalare the number array.
        scanf("%d",&a[i]);
    }

    printf("Enter the Specific Number=");
    scanf("%d",&n);

    for(i=0;i<5;i++) // To check any specific Number in array and increase the number of count of sum.
    {
        if(n==a[i])
        {
          s++;  
        }
    }
    printf("Total Number Return In Array= %d",s);


     printf("\n\n Enter the Number To Replace=");
    scanf("%d",&r);

    for(i=0;i<5;i++)// Loop to replace the number in the array.
    {
        if(n==a[i])
        {
            a[i]=r;
        }
        printf("\n New Number=%d",a[i]);
    }
 return 0;
}