//Write a program to add two distances in feet and inches using Structure.
#include <stdio.h>

union distance{
    float feet;
    float inches;
};

int main()
{
    int i;
    char x;
    union distance dist[2];

    printf("Program to store distance:\n\n");
    for(i=0;i<2;i++)
    {
        printf("Distance %d\nf=feet and i=inch ",i+1);
        scanf(" %c",&x);

        if(x == 'f'){
            printf("Distance%d in Feet= ",i+1);
            scanf("%f",&dist[i].feet);
        }

        if(x == 'i'){
            printf("Distance%d in Inches= ",i+1);
            scanf("%f",&dist[i].inches);
        }
        printf("\n");
    }
}