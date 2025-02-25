#include<stdio.h>
int main()
{
    int i,a[5],n,s=0;

    for(i=0;i<5;i++) // decalare the number array.
    {
        printf("Enter the Number=");
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

    return 0;

}