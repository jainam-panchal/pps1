//Write a program to find a character from a given string.
#include<stdio.h>
#include<string.h>
int main ()
{

//declaring variables
  int i, flag = 0, l;
  char ch[20], x;

//getting values
  printf ("Enter a string: ");
  scanf ("%s", ch);
  printf ("Enter a character to search for: ");
  scanf (" %c", &x);

//searching
  for (i = 0; i < 20; i++)
    {
      if (ch[i] == x)
	{
	  flag = 1;
	  break;
	}
    }

  if (flag == 1)
    printf ("Found at index %d\n", i);
  else
    printf ("Not Found\n");

  return 0;
}

