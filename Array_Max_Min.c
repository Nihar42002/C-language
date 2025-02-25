#include<stdio.h>

int main()
{
 int i,max,min,a[10];
 

 for(i=0;i<10;i++) // declare the array
 {
 printf("Enter the number:");
 scanf("%d",&a[i]);
 }

 max=a[0]; // To declare the Starting NUmber of array.
 min=a[0];
 for(i=0;i<=10;i++)  // To calculate the Maximum Number in array.
 {
 if(a[i]>max)
 {
 max=a[i];
 }
 }
 for(i=0;i<=10;i++) // To  calculate the Minimum Number in array.
 {
 if(a[i]<min)
 {
 min=a[i];
 }
 }
 printf("\nMaximum: %d",max);
 printf("\nMinimum: %d",min);
 
 return 0;
}