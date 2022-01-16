#include <stdio.h>

long int multi(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * multi(n - 1);
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Factorial of %d is %ld.\n", x, multi(x));
    return 0;
}