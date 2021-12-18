// Illustration of prefix and profix increament and decrement operator
#include<stdio.h>
int main(){
    int a;
    printf("Enter a value: ");
    scanf("%d",&a);

    printf("Prefix for increament is %d\n",++a);
    printf("Postfix for increament is %d\n",a++);
    
    printf("Prefix for decreament is %d\n",--a);
    printf("Postfix for decreament is %d\n",a--);


    return 0;

}