#include<stdio.h>

int main()
{
    int col,row;
    int x,y;

    printf("Enter The Number Of Column=");
    scanf("%d",&x);
     printf("Enter The Number Of Column=");
    scanf("%d",&y);


    for(col=1;col<=x;col++)
    {
        for(row=1;row<=y;row++)
        {
            if(row==1||row==y||col==1||col==x)
            {
                printf("@ ");
                
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}