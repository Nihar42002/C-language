#include<stdio.h>
int main()
{
    float i;
    printf("Enter the Number=");
    scanf("%f",&i);

    if(0<i)
    {
        printf("Postive=%.2f",i);
    }
    else if(0>i)
    {
        printf("negative=%.2f",i);
    }
    else
    {
        printf("The Number is Zero");
    }
    return 0;
}