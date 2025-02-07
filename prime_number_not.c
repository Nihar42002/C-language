#include<stdio.h>

int main()
{
    int i,check=1,n;

    printf("Enter the number :");
    scanf ("%d",&n);

    if(n<=1)
    {
        check=0;
       
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                
                check=0;
                break;
            }
        }

    }

if(check==1)
{
printf("Given Number is Prime number");
}
else{
    printf("Given Number is NOT Prime number");
}
    
return 0;

}