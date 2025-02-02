#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    float a,b;
    label:
    printf("Enter the Number=");
    scanf("%f",&a);
    fflush(stdin); 
    printf("\nEnter the char=");
    scanf("%c",&ch);
    printf("\nEnter the Number=");
    scanf("%f",&b);

    switch(ch)
    {
        
        case '+' : printf("\n Addition=%.2f",a+b);
        break; 

        
        case '-' : printf("\n Subraction=%.2f",a-b);
        break;

        
        case '/' : printf("\n Divide=%.2f",a/b);
        break;

        
        case '*' : printf("\n Multiple=%.2f",a*b);
        break;

    }
    
return 0;
}