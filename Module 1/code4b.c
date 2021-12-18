// Interchange two numbers with use of third variable

#include<stdio.h>
int main()
{

    int a,b;
    int temp;

    printf("Enter two Values: ");
    scanf("%d %d",&a,&b);
    printf("Before Interchange: %d %d\n",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("After Interchange: %d %d\n",a,b);
    
    return 0;
}