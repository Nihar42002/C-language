#include<stdio.h>
int main()
{
int r,rev=0,a,b,no;
printf("Enter Any Number=");
scanf("%d",&no);

a=no%10;

while(no>=1)
{
r=no%10;
rev=(rev*10)+r;
no=no/10;
}

b=rev%10;

printf("Addition=%d",a+b);

return 0;
 }
