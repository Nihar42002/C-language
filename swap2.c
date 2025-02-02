#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the Value of A=");
    scanf("%f",&a);
    printf("Enter the Value of B=");
    scanf("%f",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n\n A= %.2f",a);
     printf("\n\n B= %.2f",b);

     return 0;
}