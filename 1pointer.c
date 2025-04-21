#include<stdio.h>
int main()
{
    int a=10;
    int *ptra=&a;
    int **ptrb=&ptra;

    printf("%d\n",a);
    printf("%d\n",*ptra);
    printf("%d\n",**ptrb);
    printf("%p\n",*ptra);
    printf("%p\n",**ptrb);
    

}