#include<stdio.h>

typedef struct employee{
char name[50];
int day;
int month;
int year;
float salary;
}emp;

int main()
{
    emp employee[5];

    printf("Enter the DATA of Employee: ");
    for(int i=0;i<5;i++)
    {
        printf("\nEmployee %d:\n", i + 1);

        printf("Enter the Name: ");
        scanf(" %[^\n]",employee[i].name);

        printf("Enter the Date of joining the Company: ");
        scanf("%d %d %d",&employee[i].day,&employee[i].month,&employee[i].year);

        printf("Enter the Salary: ");
        scanf("%f",&employee[i].salary);

    }

    printf("\n Employees Details\n ");
    for (int i=0;i<5;i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("\n Name: %s\n",employee[i].name);
        printf("\n Joining Date:  %02d-%02d-%d\n",employee[i].day, employee[i].month, employee[i].year);
        printf("\n Salary: %f\n",employee[i].salary);

    }

    return 0;

}
