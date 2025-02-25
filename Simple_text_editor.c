#include <stdio.h>   // Include standard input-output library
#include <string.h>  // Include string handling functions
#include <stdlib.h>  // Include standard library functions

// Function to open and read a file
void openfile(char *filename, char *buffer) 
{
    FILE *file = fopen(filename, "r");  // Open the file in read mode
    if (file == NULL) 
    {  // Check if the file exists
        printf("Error: Could not open file %s\n", filename);
        return;
    }
    fread(buffer, sizeof(char), 10000, file);  // Read the file content into the buffer
    fclose(file);  // Close the file
}

// Function to save text to a file
void savefile(char *filename, char *buffer) 
{
    FILE *file = fopen(filename, "w");  // Open the file in write mode
    if (file == NULL) 
    {  // Check if the file was opened successfully
        printf("Error: Could not open file %s\n", filename);
        return;
    }
    fwrite(buffer, sizeof(char), strlen(buffer), file);  // Write text from buffer to file
    fclose(file);  // Close the file
    printf("File Saved Successfully.\n");
}

int main() 
{
    char filename[100];  // To store the filename
    char text[10000];    // Buffer to store file content or user input
    int choice;          // User's menu choice

    // Infinite loop for the text editor menu
    while (1) 
    {
        // Display menu options
        printf("\nSimple Text Editor\n");
        printf("1. Open File\n");
        printf("2. Edit Text\n");
        printf("3. Save File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline left in the input buffer

        switch (choice) 
        {
            case 1:  // Open a file
                printf("Enter filename to open: ");
                scanf("%s", filename);
                openfile(filename, text);
                printf("File content:\n%s\n", text);
                break;

            case 2:  // Edit text
                printf("Enter text (max %d characters):\n", 10000);
                fgets(text, 10000, stdin);  // Read user input into text buffer
                break;

            case 3:  // Save file
                printf("Enter filename to save: ");
                scanf("%s", filename);
                savefile(filename, text);
                break;

            case 4:  // Exit the program
                printf("Exiting...\n");
                return 0;

            default:  // Handle invalid input
                printf("Invalid choice, try again.\n");
        }
    }

    return 0;
}
