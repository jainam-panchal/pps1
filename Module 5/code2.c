//Write a function in the program to return 1 if number is prime otherwise return 0;

#include<stdio.h>

int primeOrNot (int num)
{
  int i, flag = 1, rem;
  for (i = 2; i <= num / 2; i++)
    {

      rem = num % i;
      if (rem == 0)
	{
	  flag = 0;
	  break;
	}
    }
  return flag;
}

int main ()
{
  int result, x;

  scanf ("%d", &x);
  result = primeOrNot (x);
  printf ("%d\n", result);
}

