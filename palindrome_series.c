#include<stdio.h>
int main()
{
    int no,r,rev=0,a;
    printf("Enter The Number=");
    scanf("%d",&no);
    a=no;

    while(no>=1)
    {
        r=no%10;
        rev=(rev*10)+r;
        no=no/10;
    }
    

if (a==rev)
{
    printf("\nPalindrome series");
}
else
{
printf("\n Not a Palindrome series");
}
return 0;

}