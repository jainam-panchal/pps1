//C Program to count number of lines in a file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    char ch;
    int count = 1;
    ptr = fopen("test", "r");
    if (ptr == NULL)
    {
        printf("Error while reading file.\n");
    }
    else
    {
        ch = fgetc(ptr);
        while (ch != EOF)
        {
            if (ch == '\n')
            {
                count++;
            }
            ch = fgetc(ptr);
        }
        printf("Line Count = %d\n", count);
    }
    fclose(ptr);
    return 0;
}