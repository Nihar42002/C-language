#include<stdio.h>
int main()
{
   int a,b,add,multiple;
   float divide;
   printf("Enter a value = ");
   scanf("%d",&a); 
   printf("Enter a value = ");
   scanf("%d",&b); 

   add=a+b;
   multiple=a*b;
   divide=a/b;

   printf("Answer = %d",add);
    printf(" \n Answer = %d",multiple);
     printf(" \n Answer = %f",divide);

   return 0;

}