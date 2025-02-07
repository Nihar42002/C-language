#include<stdio.h>

int main()
{
 int i,max,min,a[10];
 

 for(i=0;i<10;i++)
 {
 printf("Enter the number:");
 scanf("%d",&a[i]);
 }

 max=a[0];
 min=a[0];
 for(i=0;i<=10;i++)
 {
 if(a[i]>max)
 {
 max=a[i];
 }
 }
 for(i=0;i<=10;i++)
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