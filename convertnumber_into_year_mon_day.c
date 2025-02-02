#include<stdio.h>
int main()
{
    int n,year,month,dl;
    int day;
    printf("Enter the Random Number=");
    scanf("%d",&n);

    year=n/365;
    dl=n/30;
    month=dl-(year*12);
    day=n%30;

    printf("\nYEARS=%d",year);
    printf("\nMONTH=%d",month);
    printf("\nDAYS=%d",day);

    return 0;


}