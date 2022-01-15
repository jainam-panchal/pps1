/* Write a program to find the maximum element from a one-dimensional array */

#include<stdio.h>
int main(){

// declaring one dimentional array
int data[20],m,i;
int max;

// get to know how many elements will be entered to find maximum
printf("How many numbers would be entered to find maximum? ");
scanf("%d",&m);

// read values
printf("Enter Numbers: ");
for(i=0;i<m;i++){
		scanf("%d",&data[i]);
	}
// find maximum value
max = data[0];
for(i=0;i<m;i++){
	if(data[i] > max ) max = data[i];
	}
// print maximum
printf("Maximum Value: %d\n",max);

return 0;

}


