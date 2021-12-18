// check whether student is failed or passed from entered mark

#include<stdio.h>

int main(){
    int unsigned marks;

    printf("Enter marks to check: ");
    scanf("%d",&marks);

    if(marks>33) printf("Passed!\n");
    else printf("Failed\n");

    return 0; 
}