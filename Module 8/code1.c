//Write a program to write a string in file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char str[80];
    if ((fptr = fopen("test", "w")) == NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }

    printf("Enter Text: ");
    while (gets(str) != NULL)
        fputs(str, fptr);
    fclose(fptr);
    return 0;
}