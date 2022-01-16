#include <stdio.h>
#include <math.h>


int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);


int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    // Call isPrime() functions
    if(isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    
    // Call isArmstrong() function
    if(isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    

    if(isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
    
    return 0;
}


int isPrime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
       
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}



int isArmstrong(int num) 
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    
    originalNum = num;

    digits = (int) log10(num) + 1;

    while(num > 0)
    {

        lastDigit = num % 10;

        sum = sum + round(pow(lastDigit, digits));

        num = num / 10;
    }
    
    return (originalNum == sum);
}


int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    
    return (num == sum);
}