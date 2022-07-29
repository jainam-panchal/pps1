//Write a program to find sum of digits of the number using Recursive Function.
#include <stdio.h>
int fun(int n, int rem, int sum)
{
    if(n==0)
        return sum;
    else
    {
        rem=n%10;
        sum+=rem;
        n/=10;
        return fun(n, rem, sum);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Sum of digits is %d",fun(n,0,0));
    return 0;
}
