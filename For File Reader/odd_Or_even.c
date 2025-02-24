#include<stdio.h>

int main()
{
FILE *fptr;

fptr=fopen("text.txt","r");

if (fptr == NULL) {
   printf("Error: Could not open file.\n");
   return 1; // Exit with error code
}

char ch;

printf("EVEN: \n");
printf("---------------------------\n");
while((ch=fgetc(fptr))!=EOF)
 {
    if(ch%2==0||ch==0)
    {
    printf("%c\n",ch);
   
    }  
 }

 rewind(fptr);


 printf("ODD: \n");
 printf("---------------------------\n");
 while((ch=fgetc(fptr))!=EOF)
 {
    if(ch%2!=0||ch==0)
    {
    printf("%c\n",ch);
   
    }  
   
 }
 fclose(fptr);
 return 0;
}
