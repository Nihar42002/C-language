#include <stdio.h>

// Define a structure to store employee details
typedef struct employee
 {
    char name[50];  // Array to store employee's name
    int day;        // Day of joining
    int month;      // Month of joining
    int year;       // Year of joining
    float salary;   // Salary of the employee
} emp;  // Define a new type `emp` for the structure

int main()
 {
    emp employee[5];  // Declare an array of 5 employee structures

    printf("Enter the DATA of Employees:\n");

    // Loop to take input for 5 employees
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);

        // Taking input for employee name
        printf("Enter the Name: ");
        scanf(" %[^\n]", employee[i].name);  // Read full name with spaces

        // Taking input for date of joining
        printf("Enter the Date of joining the Company (DD MM YYYY): ");
        scanf("%d %d %d", &employee[i].day, &employee[i].month, &employee[i].year);

        // Taking input for salary
        printf("Enter the Salary: ");
        scanf("%f", &employee[i].salary);
    }

    // Displaying the entered employee details
    printf("\n Employees Details\n");

    for (int i = 0; i < 5; i++)
     {
        printf("\nEmployee %d:\n", i + 1);
        printf("\n Name: %s\n", employee[i].name);
        printf("\n Joining Date: %02d-%02d-%d\n", employee[i].day, employee[i].month, employee[i].year);
        printf("\n Salary: %.2f\n", employee[i].salary);  // Display salary with 2 decimal places
    }

    return 0;  // Exit the program successfully
}
