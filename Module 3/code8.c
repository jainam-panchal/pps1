//Program to evaluate sum of 1/1 + 1/2 + 1/3 + ..+ 1/n

#include <stdio.h>
int main()
{
    int n;
    long double i, sum = 0.00;

    printf("Program to evaluate sum of 1/1 + 1/2 + 1/3 + ..+ 1/n\n");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        sum = sum + 1/i;
        }
        
    printf("Sum is %Lf\n", sum);
    
    return 0;
}
