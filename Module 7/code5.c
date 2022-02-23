#include<stdio.h>

union abc {
  int a;
  char b;
};

int main() {
  union abc
  var;
  var.a = 68;
  printf("a %d\n",var.a);
  printf("b %c",var.b);
  return 0;
}
