#include<stdio.h>
int addition(int n);
int main()
{
    int x,sum;
    printf("Enter a number to add first x numbers: ");
    scanf("%d",&x);
    sum = addition(x);
    printf("Addition of first x number is: %d\n",sum);
    return 0;
}

int addition(int n)
{
    if(n != 0)
    {
        return n + addition(n-1);
    }
    
}