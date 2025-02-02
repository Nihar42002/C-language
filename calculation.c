#include<stdio.h>
int main()
{
   int a,b,add,multiple,subtraction;
   float divide;
   printf("Enter a value = ");
   scanf("%d",&a); 
   printf("Enter a value = ");
   scanf("%d",&b); 

   add=a+b;
   subtraction=a-b;
   multiple=a*b;
   divide=a/b;

   printf("\n Answer = %d",add);
   printf("\n Answer = %d",subtraction);
    printf(" \n Answer = %d",multiple);
     printf(" \n Answer = %f",divide);

   return 0;

}