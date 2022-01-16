#include <stdio.h>
#include <math.h>

int primecheck(int num)
{
    int i, rem, flag = 0;
    for (i = 2; i < num / 2; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            flag = 1;
            break;
        }
    }
    return (flag);
}

int armstrongcheck(int num)
{
    int i, sum = 0, rem, temp, digit;
    temp = num;
    digit = (int)log10(num) + 1;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + round(pow(rem, digit));
        num = num / 10;
    }
    if (temp == sum)
    {
        return 1;
    }
    else
        return 0;
}

int perfectcheck(int num)
{
    int i, sum = 0, temp, rem;
    temp = num;
    for (i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum += i;
        }
    }

    if (sum == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int x, isprime, isarmstrong, isperfect;
    scanf("%d", &x);

    //prime or not
    isprime = primecheck(x);
    if (isprime == 0)
    {
        printf("%d is a prime number.\n", x);
    }
    else
    {
        printf("%d is not a prime number.\n", x);
    }

    //armstrong or not
    isarmstrong = armstrongcheck(x);
    if (isarmstrong == 1)
    {
        printf("%d is a Armstrong number.\n", x);
    }
    else
    {
        printf("%d is not a Armstrong number.\n", x);
    }

    //perfect num or not
    isperfect = perfectcheck(x);
    if (isperfect == 1)
    {
        printf("%d is a Perfect number.\n", x);
    }
    else
    {
        printf("%d is not a Perfect number.\n", x);
    }

    return 0;
}
