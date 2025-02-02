#include<stdio.h>
int main()
{
    float ft,ct;
    printf("Enter the value of Centigrade=");
    scanf("%f",&ct);

    ft=1.8*ct+32;

    printf("\nFahrenheit= %f",ft);

     printf("\n\nEnter the value of Fahrenheit=");
    scanf("%f",&ft);

    ct=(ft-32)/1.8;

     printf("\nCentigrade= %f",ct);

     return 0;

}