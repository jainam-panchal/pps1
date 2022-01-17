#include <stdio.h>
int main()
{
    int i;
    char ch;
    char *ch1;
    char str[20] = "Jainam";
    char *str1[20];
    printf("Address of Character : %p\n", &*ch1);
    printf("Addresses of String Characters: \"\%s\"\n", str);

    for (i = 0; str[i]; i++)
    {
        printf("%c has address: %p\n", str[i], *str1);
        *str1 = *str1 + 1;
    }
}
