#include<stdio.h>

int main()
{
    float a,b,t;

    printf("Enter the Number A: ");
    scanf("%f",&a);
    printf("Enter the Number B: ");
    scanf("%f",&b);

  float *ptra = &a;
  float *ptrb = &b;

  t=*ptra;
  *ptra=*ptrb;
  *ptrb=t;

   
    printf("\nA= %.2f\n",*ptra);
    printf("\nB= %.2f\n",*ptrb);

}