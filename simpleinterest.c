#include<stdio.h>
int main()
{
    float i,p,r,n;
    printf("Enter Principal amount=");
    scanf("%f",&p);
    printf("Enter the Rate of Interest=");
    scanf("%f",&r);
    printf("Enter The Number OF Year=");
    scanf("%f",&n);

    i=(p*r*n)/100;

    printf("Simple Interest= %f",i);

    return 0; 

}