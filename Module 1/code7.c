// Convert Centigrade to Fahrenheit
// f=1.5*c+32

#include<stdio.h>
int main(){
    float c,f;

    printf("Centigrade = ");
    scanf("%f",&c);

    f=(1.5*c)+32;

    printf("Fehrenheit = %f\n",f);
    return 0;
}