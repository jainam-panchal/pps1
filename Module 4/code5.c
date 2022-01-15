//Write a program to perform addition of all elements in array

#include<stdio.h>
int main ()
{

// declaring an array
  int a[5] = { 1, 2, 3, 4, 5 };
  int i, x;

//printing array elements
  printf ("Pre-Declaired Array Contains: ");
  for (i = 0; i < 5; i++)
    {
      printf ("%d ", a[i]);
    }
    
// getting  values of x which is to be added
  printf ("\nEnter the value which you want to add: ");
  scanf ("%d", &x);

//doing addition
  for (i = 0; i < 5; i++)
    {
      a[i] = a[i] + x;
    }

//displaying result
  printf ("After Addition, Array Contains: ");
  for (i = 0; i < 5; i++)
    {
      printf ("%d ", a[i]);
    }
  printf ("\n");

  return 0;

}

