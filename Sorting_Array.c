#include<stdio.h>

int main()
{
 int i,j,t,a[5];

 for(i=0;i<5;i++)
 {
 printf("Enter the number:");
 scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
 for(j=i+1;j<5;j++)
 {
 if(a[i]>a[j])
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
 }
 }
 }
 for(i=0;i<5;i++)
 {
 printf("\n Answer: %d",a[i]);
 
 }
 return 0;

 }

