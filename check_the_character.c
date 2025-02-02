#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character=");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')
    {
      printf("Capital Letter");
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("Small Letter");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("It is Digit");
    }
    else
    {
        printf("Special Character");
    }
    
    }