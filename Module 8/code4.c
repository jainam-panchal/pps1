//C Program to print contents of file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *p;
    char c;

    if ((p = fopen("test", "r")) == NULL)
    {
        printf("Error in Opening File\n");
        exit(1);
    }

    while ((c = fgetc(p)) != EOF)
        printf("%c", c);

    fclose(p);
    return 0;
}