//Write a Program for deletion of an element from the specified location from Array.

#include<stdio.h>
int main ()
{

// declaring 
  int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int i, x;

//printing array
  printf ("Array contains: ");
  for (i = 0; i < 10; i++)
    {
      printf ("%d ", data[i]);
    }

//get value which user want to delete
  printf ("\nEnter the location where you wanna delete the element? ");
  scanf ("%d", &x);

//deleting
  for (i = x - 1; i < 10; i++)
    {
      data[i] = data[i + 1];
    }

//printing array
  printf ("Now, Array contains: ");
  for (i = 0; i < 9; i++)
    {
      printf ("%d ", data[i]);
    }
  printf ("\n");

  return 0;
}

