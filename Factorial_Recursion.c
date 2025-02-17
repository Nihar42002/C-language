#include<stdio.h>

int factorial(int n)
{
    if(n==0||n==1)
    
        return 1;

        return n*factorial(n-1);
    
}

    int main()
    {
        int num;
        printf("Enter the Number =");
        scanf("%d",&num);

        if(num<0)
        {
            printf("Factorial is not defined for negative number.\n");

        }
        else
        {
            printf("Factorial of %d will be= %d",num,factorial(num));
        }

        return 0;
    }
    
