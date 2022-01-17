#include <stdio.h>
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {9, 8, 7, 6, 5};
    int i,t;
    int *ptr1 = arr1, *ptr2 = arr2;

    printf("Array1 : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Array2 : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        t = *(ptr1+i);
        *(ptr1+i) = *(ptr2+i);
        *(ptr2+i) = t;
    }

    printf("Array1 : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Array2 : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}