#include <stdio.h>

int main() 
{
    int rows, i, j, val;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
     {
        for (j = 0; j < rows - i - 1; j++)  // Print spaces
            printf("  ");

        val = 1;  // First element is always 1
        for (j = 0; j <= i; j++)
        
        {
            printf("%4d ", val);
            val = val * (i - j) / (j + 1);  // Compute next value
        }
        printf("\n");
    }
    return 0;
}
