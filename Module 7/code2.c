#include <stdio.h>

struct student
{
    char name[30];
    char branch[10];
    unsigned int marks;
};

int main()
{   
    int n;
    struct student student[10];

    for(int i=0;i<10;i++)
    {   
        printf("Enter Data for student %d\n",i+1);
        printf("Name   : ");
        scanf("%s",student[i].name);
        printf("Branch : ");
        scanf("%s",student[i].branch);
        printf("Marks  : ");
        scanf("%d",&student[i].marks);
    }

    printf("How many number of students details you wanna print? ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nDetails of Student No.%d\n",i+1);
        printf("Name    : %s\n",student[i].name);
        printf("Branch  : %s\n",student[i].branch);
        printf("Marks   : %d\n\n",student[i].marks);
    }
    
    return 0;
}