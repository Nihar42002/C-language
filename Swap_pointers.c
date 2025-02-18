#include<stdio.h>

int main()
{
    float a,b;

    printf("Enter the Number A: ");
    scanf("%f",&a);
    printf("Enter the Number B: ");
    scanf("%f",&b);

  float *ptra = &b;
  float *ptrb = &a;
   
    printf("\nA= %.2f\n",*ptra);
    printf("\nB= %.2f\n",*ptrb);

}