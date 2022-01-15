//Write a program to delete a character in a given string.

#include<stdio.h>
int main ()
{

// declaring 
  char data[50], x;
  int i, y;

//getting values
  printf ("Enter a string: ");
  scanf ("%s", data);

//get value which user want to delete
  printf ("Enter what you wanna delete? ");
  scanf (" %c", &x);

//finding index of entered character
  for (i = 0; i < 50; i++)
    {
      if (data[i] == x)
	break;
    }
  if (i == 50)
    {
      printf ("Entered character does not exist in enterd string\n");
    }
  else
    {
      y = i;
      
      
//deleting
      for (i = 0; i < 50; i++)
	{
	  if (data[i] == x)
	    {
	      data[i] = '\0';
	    }
	    }

//printing string
	  printf ("Now, String: ");
	  for (i = 0; i < 8; i++)
	    {
	      printf ("%c", data[i]);
	    }
	}
	printf("\n");
      return 0;
    }

