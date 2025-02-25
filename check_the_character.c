#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character="); // Enter any chararter  
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z') //check the condition.
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