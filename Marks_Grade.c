#include<stdio.h>
int main()
{
    float mark,a,b,c;
    printf("Enter the Maths Marks=");
    scanf("%f",&a);
    printf("Enter the English Marks=");
    scanf("%f",&b);
    printf("Enter the Science Marks=");
    scanf("%f",&c);

    mark=(a+b+c)/3;

    if(mark<=100 && mark>=80)
    {
        printf("Distinction");
    }
    else if(mark<=79 && mark>=60)
    {
        printf("First Class");
    }
    else if(mark<=59 && mark>=40)
    {
        printf("Second Class");
    }
    else
    {
        printf("Fail");
    }

return 0;
}