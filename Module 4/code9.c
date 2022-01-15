// Write a program to replace a character in a given string.

#include<stdio.h>
int main ()
{

// declaring variables
  char ch[20], x, y;
  int i;

//getting values
  printf ("Enter a string: ");
  scanf ("%s", ch);
  printf ("What do you wanna replace? ");
  scanf (" %c", &x);
  printf ("With? ");
  scanf (" %c", &y);
//replacement
  for (i = 0; i < 20; i++)
    {
      if (ch[i] == x)
	ch[i] = y;
    }

//printing string
  printf ("After Replacement: ");
  printf ("%s\n", ch);

  return 0;
}

