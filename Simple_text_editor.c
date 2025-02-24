#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void openfile(char *filename,char *buffer)
{
    FILE *file = fopen(filename,"r");
    if(file==NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return;
    }
    fread(buffer,sizeof(char),10000,file);
    fclose(file);
}
void savefile(char *filename,char *buffer)
{
    FILE *file = fopen(filename,"w");
    if(file==NULL)
    {
        printf("Error: Could not open file %s\n", filename);
        return;
    }
    fwrite(buffer,sizeof(char),strlen(buffer),file);
    fclose(file);
    printf("File Saved Successfully.\n");
}



int main()
{
    char filename[100];
    char text[10000];
    int choice;

    while (1) {
        printf("\nSimple Text Editor\n");
        printf("1. Open File\n");
        printf("2. Edit Text\n");
        printf("3. Save File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        
        switch (choice) {
            case 1:
                printf("Enter filename to open: ");
                scanf("%s", filename);
                openfile(filename, text);
                printf("File content:\n%s\n", text);
                break;
            case 2:
                printf("Enter text (max %d characters):\n", 10000);
                fgets(text, 10000, stdin);
                break;
            case 3:
                printf("Enter filename to save: ");
                scanf("%s", filename);
                savefile(filename, text);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}


