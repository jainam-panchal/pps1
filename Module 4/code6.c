//Write a Program to reverse the array elements in C Programming.
#include<stdio.h>
int main ()
{

//declaring an array
  int a[5] = { 1, 2, 3, 4, 5 };
  int i, temp;

//printing pre-defined array
  printf ("An array Contains: ");
  for (i = 0; i < 5; i++)
    {
      printf ("%d ", a[i]);
    }

//reversing an array
  for (i = 0; i < 5 / 2; i++)
    {
      temp = a[i];
      a[i] = a[5 - 1 - i];
      a[5 - 1 - i] = temp;
    }

//printing 
  printf ("\nNow, The array Contains: ");
  for (i = 0; i < 5; i++)
    {
      printf ("%d ", a[i]);
    }
  printf ("\n");
  return 0;
}

