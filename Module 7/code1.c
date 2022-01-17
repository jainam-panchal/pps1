#include<stdio.h>

struct specs{
    char cpu[40];
    char gpu[40];
    char cooling[40];
    int ram;
};

int main()
{
    struct specs pc1;
    printf("Which CPU you wanna use? ");
    gets(pc1.cpu);
    printf("Which GPU you wanna use? ");
    gets(pc1.gpu);
    printf("Which Cooling Solution you wanna use? ");
    gets(pc1.cooling);
    printf("How much ram you wanna add? ");
    scanf("%d",&pc1.ram);

    printf("\nDesired PC Build:\n");
    printf("CPU              : %s\n",pc1.cpu);
    printf("GPU              : %s\n",pc1.gpu);
    printf("RAM              : %d GB\n",pc1.ram);
    printf("Cooling Solution : %s\n",pc1.cooling);

    return 0;
}