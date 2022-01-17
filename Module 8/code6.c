//C Program to merge contents of two files into a third file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sptr1, *sptr2, *dptr;
    char ch;

    if ((sptr1 = fopen("test3", "r")) == NULL)
    {
        printf("Error in opening source file\n");
        exit(1);
    }
    if ((sptr2 = fopen("test2", "r")) == NULL)
    {
        printf("Error in opening source file\n");
        exit(1);
    }
    if ((dptr = fopen("test1", "w")) == NULL)
    {
        printf("Errorr in opening destination file\n");
        exit(1);
    }

    while ((ch = fgetc(sptr1)) != EOF)
        fputc(ch, dptr);
    while ((ch = fgetc(sptr2)) != EOF)
        fputc(ch, dptr);

    fclose(sptr1);
    fclose(sptr2);
    fclose(dptr);

    return 0;
}