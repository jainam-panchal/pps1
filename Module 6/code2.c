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