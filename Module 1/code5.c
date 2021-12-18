//To display the size of every data type using "sizeof" operator
#include<stdio.h>
int main(){
    int a;
    float b;
    double c;
    char d;

    printf("Size of int is %ld\n",sizeof(a));
    printf("Size of float is %ld\n",sizeof(b));
    printf("Size of double is %ld\n",sizeof(c));
    printf("Size of char is %ld\n",sizeof(d));

    return 0;
}