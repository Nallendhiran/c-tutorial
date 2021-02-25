#include<stdio.h>

//it takes the storage of high value type
union Student{
    char name[20];
    int age;
    char school[50];
};
int main(){
    union Student student;
    student.name="mine";
    student.age=15;
    student.school="jmhss";

}
