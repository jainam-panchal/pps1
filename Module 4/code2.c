//Write a program to find out which number is even or odd from list of 10 numbers using array

#include<stdio.h>
int main(){
	
// declaring an array to store values

int data[10], i;

//reading 10 values from users

printf("Enter 10 values to check even or odd\n");
for(i=0;i<10;i++){
	scanf("%d",&data[i]);
	}

//condition to check is even or odd

printf("Odd Numbers: ");
for(i=0;i<10;i++){
	if(data[i] & 1) printf("%d ",data[i]);
	}
	
printf("\nEven Numbers: ");
for(i=0;i<10;i++){
	if(!(data[i] & 1)) printf("%d ",data[i]);
	}
	
printf("\n");
	
return 0;

}
