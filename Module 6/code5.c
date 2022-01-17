#include <stdio.h>
int main()
{
    int arr[20];
    int n, i;
    int *pArray = arr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", pArray);
        pArray++;
    }

    pArray = arr;

    printf("Elements in Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *pArray);
        pArray++;
    }
    printf("\n");

    return 0;
}