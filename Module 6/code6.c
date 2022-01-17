#include <stdio.h>
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5], n;
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    printf("Array1 contains: ");
    for (n = 0; n < 5; n++)
    {
        printf("%d ", arr1[n]);
    }
    printf("\n");

    printf("Array2 contains: ");
    for (n = 0; n < 5; n++)
    {
        printf("%d ", arr2[n]);
    }
    printf("\n");

    for (n = 0; n < 5; n++)
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }

    printf("\nNow,\nArray1 contains: ");
    for (n = 0; n < 5; n++)
    {
        printf("%d ", arr1[n]);
    }
    printf("\n");

    printf("Array2 contains: ");
    for (n = 0; n < 5; n++)
    {
        printf("%d ", arr2[n]);
    }
    printf("\n");

    return 0;
}