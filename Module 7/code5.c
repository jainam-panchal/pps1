#include <stdio.h>

union car
{
  char name[20];
  int price;
};

int main()
{
  union car car1, car2;
  return 0;
}
