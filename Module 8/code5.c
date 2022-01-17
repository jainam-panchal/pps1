//C Program to copy contents of one file to another file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sptr, *dptr;
    char ch;

    if ((sptr = fopen("test2", "r")) == NULL)
    {
        printf("Error in opening source file\n");
        exit(1);
    }

    if ((dptr = fopen("test1", "w")) == NULL)
    {
        printf("Errpr in opening destination file\n");
        exit(1);
    }

    while ((ch = fgetc(sptr)) != EOF)
        fputc(ch, dptr);

    fclose(sptr);
    fclose(dptr);

    return 0;
}