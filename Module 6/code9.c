#include <stdio.h>

void sort(int *ptr);
int main()
{
    int arr[10];
    int i;

    printf("Enter elements to sort: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(&arr);

    printf("After Sorting: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void sort(int *ptr)
{
    int j, temp;
    for (int i = 0; i < 10; ++i)
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (*(ptr + j) > *(ptr + i))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}
