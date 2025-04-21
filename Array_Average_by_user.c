#include<stdio.h>
int main()
{
    int i,n,s=0,a;

    printf("Give the size of Array="); //declaring the size of array.
    scanf("%d",&n);

    for(i=1;i<=n;i++) // Loop for addition.
    {
        int a[i];
        printf("Enter The Number="); 
        scanf("%d",&a[i]);

        s=s+a[i];

    } 

   a=s/n;

    printf("Answer =%d\n",s);
    printf("Average =%d",a);

    return 0;

    
}