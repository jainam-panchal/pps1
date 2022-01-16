#include <stdio.h>

void doUpper(char[]);

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s",str);
    doUpper(str);
    return 0;
}

void doUpper(char str[20])
{
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] > 96 && str[i] < 123)
            str[i] -= 32;
    }
    printf("In upper case: %s\n", str);
}
