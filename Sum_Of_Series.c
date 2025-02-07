#include<stdio.h>
int main()
{
    int i,n,p,s=0;

    printf("Enter the number Till Where You Want to do Sum=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
{
p=i*i;
s=s+p;
}
printf("Answer= %d",s);
return 0;
}