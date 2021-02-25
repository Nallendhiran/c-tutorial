#include<stdio.h>

//it is similiar to class
struct employee{
    char name[50];
    int age;
    float salary;
};

void main()
{
    struct employee emp1,emp2;

    printf("Enter emp1 name:\n");
    scanf("%s",&emp1.name);
    printf("Enter emp1 age:\n");
    scanf("%d",&emp1.age);
    printf("Enter emp1 salary:\n");
    scanf("%f",&emp1.salary);

    printf("Enter emp2 name:\n");
    scanf("%s",&emp2.name);
    printf("Enter emp2 age:\n");
    scanf("%d",&emp2.age);
    printf("Enter emp2 salary:\n");
    scanf("%f",&emp2.salary);

    printf("emp1 = %s : %d : %f \n",emp1.name,emp1.age,emp1.salary);
    printf("emp2 = %s : %d : %f \n",emp2.name,emp2.age,emp2.salary);
}

