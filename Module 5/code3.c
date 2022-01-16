//Write a function Exchange to interchange the values of two variables, say x and y illustrates the use of this function in acalling function
#include<stdio.h>

void interchange(int *a,int *b){

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("Before %d %d\n",x,y);
    interchange(&x,&y);
    printf("After %d %d\n",x,y);

}