#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the Number=");
    scanf("%f",&a);
    printf("Enter the Number=");
    scanf("%f",&b);
    printf("Enter the Number=");
    scanf("%f",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("Maximum= %.2f",a);
        }
    }
        else if(b>c)
        {
            if(b>a)
            {
                printf("Maximum= %.2f",b);
            }
        }
 else if(c>a)
        {
            if(c>b)
            {
                printf("Maximum= %.2f",c);
            }
        }
    
    return 0;
}