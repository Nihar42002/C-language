#include <stdio.h>  // Include standard input-output library
#include <math.h>   // Include math library for using the pow() function

// Global variable declaration
float pi = 3.14;  // Define the value of Pi
float r;       // Declare a global variable for radius

// Function prototype declaration
void Area();  // Function to calculate the total surface area of a cone

int main() 
{
    // Prompt the user to enter the radius
    printf("Enter the Radius = ");
    scanf("%f", &r);  // Read the radius from user input

    // Calculate and print the area of the circle using the formula π * r²
    printf("Area of circle = %.2f\n", pi * pow(r, 2));

    // Call the function to calculate the total surface area of a cone
    Area();

    return 0;  // Exit the program successfully
}

// Function to calculate and print the total surface area of a cone
void Area() 
{
    static int coneCount = 0; // Static variable to count cone calculations
    float length;  // Declare a variable to store the slant height of the cone

    // Prompt the user to enter the slant height
    printf("\nEnter the Length = ");
    scanf("%f", &length);  // Read the length from user input

    // Calculate and print the total surface area of the cone using the formula π * r * (r + l)
    printf("Total Surface Area of Cone = %.2f\n", pi * r * (r + length));

    coneCount++; // Increment the count
    printf("Number of cone area calculations performed: %d\n", coneCount);
   
}
