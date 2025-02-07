#include<stdio.h>
int main()
{
    int i,n,s=0;

    printf("Give the size of Array=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
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