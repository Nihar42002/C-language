#include<stdio.h>
int main()
{    
    int a[3][3],b[3][3],c[3][3],i,j; //declaration of arrays

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

        {
            printf("Enter the Number For A Matrix : ");
            scanf("%d",&a[i][j]);

        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

        {
            printf("Enter the Number For B Matrix : ");
            scanf("%d",&b[i][j]);

        }
    }

    for(i=0;i<3;i++) // loop to add two arrays
    {
        for(j=0;j<3;j++)

        {
            c[i][j]=a[i][j]+b[i][j];

            printf(" %d",c[i][j]);
           

        }
        printf("\n");
    }

return 0;
}