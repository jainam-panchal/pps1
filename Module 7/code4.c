#include <stdio.h>

struct empl{
    char name[20];
    int age;
    int workexp;
    int salary;
    int comp_projects;
};

int main()
{
    struct empl e1;
    printf("Enter the name of Employee: ");
    scanf("%s",e1.name);
    printf("Enter the age of Employee: ");
    scanf("%d",&e1.age);
    printf("Enter total work experience: ");
    scanf("%d",&e1.workexp);
    printf("Enter total completed projects: ");
    scanf("%d",&e1.comp_projects);
    printf("Enter the salary given: ");
    scanf("%d",&e1.salary);

    printf("\nDetails of Employee\n");
    printf("Name                    : %s\n",e1.name);
    printf("Age                     : %d\n",e1.age);
    printf("Salary                  : %d Rs\n",e1.salary);
    printf("Work Experience         : %d Years\n",e1.workexp);
    printf("Total Completed Projects: %d Projects\n",e1.comp_projects);

    return 0;
}