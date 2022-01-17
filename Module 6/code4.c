#include <stdio.h>
int addition(int x, int y, int *sum)
{
    *sum = x + y;
    return *sum;
}
int main()
{
    int x, y, sum;
    printf("Enter two numbers to print sum: ");
    scanf("%d%d", &x, &y);
    addition(x, y, &sum);
    printf("Sum: %d\n", sum);
    return 0;
}