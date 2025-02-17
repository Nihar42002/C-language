#include<stdio.h>

double sum(int n)
{
    if(n==1)
    
        return 1.0;

        return 1.0/n+sum(n-1);
    
}

    int main()
    {
        int num;
        printf("Enter the Number =");
        scanf("%d",&num);

        if(num<=0)
        {
            printf("Sum of Series is not defined for  number.\n");

        }
        else
        {
            printf("Sum of Series  of %d will be= %lf",num,sum(num));
        }

        return 0;
    }
    
