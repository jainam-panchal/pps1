#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int n, x = 0, i;

    scanf("%d", &n);

    printf("fibonacci series:\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d\t", fibonacci(x));
        x++;
    }

    printf("\n");
    return 0;
}
