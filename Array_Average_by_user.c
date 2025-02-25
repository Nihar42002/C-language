#include<stdio.h>
int main()
{
    int i,n,s=0;

    printf("Give the size of Array="); //declaring the size of array.
    scanf("%d",&n);

    for(i=1;i<=n;i++) // Loop for addition.
    {
        int a[i];
        printf("Enter The Number="); 
        scanf("%d",&a[i]);

        s=s+a[i];

    }

   s=s/n;

    printf("Answer =%d",s);

    return 0;

    
}