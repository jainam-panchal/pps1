#include <stdio.h>
int add(int num)
{
    if (num != 0)
    {
        return (num % 10 + add(num / 10));
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x, sum;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Sum of entered num: %d\n", add(x));
    return 0;
}
