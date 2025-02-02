#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the Value of A=");
    scanf("%f",&a);
    printf("Enter the Value of B=");
    scanf("%f",&b);
c=a;
a=b;
b=c;

printf("\n\nA= %.2f",a);
printf("\n\nB= %.2f",b);
return 0;

}