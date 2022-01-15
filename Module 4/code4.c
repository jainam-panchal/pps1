//Write a program to search an element in array.

#include<stdio.h>
int main ()
{

// Using already defined array
  int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int i, x, flag = 0;

//what to search for
  printf ("Which element are you looking for? ");
  scanf ("%d", &x);

//check for element
  for (i = 0; i < 10; ++i)
    {
      if (data[i] == x)
	{
	  flag = 1;
	  break;
	}
    }

// output the result
  if (flag == 1)
    {
      printf
	("Yes, It is present in the array at index = %d and at number = %d.\n",
	 i, i + 1);
    }
  else
    printf ("No, It is not present.\n");
}
