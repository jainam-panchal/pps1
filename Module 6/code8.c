#include <stdio.h>
int main()
{
    int arr[5], i, n;
    int *ptr = arr;
    char op;
    printf("Enter five elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Which index element you wanna access: ");
    scanf("%d", &n);
    printf("Element: %d\nDo you wanna access another element? y/n ", *(ptr + n));
    scanf(" %c", &op);

    if (op == 'y')
    {
        printf("Which index element you wanna access: ");
        scanf("%d", &n);
        printf("Element: %d\n", *(ptr + n));
    }

    return 0;
}
