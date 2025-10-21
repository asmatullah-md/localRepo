#include<stdio.h>
#include<string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     // struct student s1;
//     // s1.roll = 1664;
//     // s1.cgpa = 9.2;
//     // strcpy(s1.name, "asmatullah");

//     // printf("student name = %s\n", s1.name);
//     // printf("student roll = %d\n", s1.roll);
//     // printf("student cgpa = %f\n", s1.cgpa);

//          //OR

//      struct student s1 = {59, 8.5, "asmatullah"};
//      printf("student name = %s\n", s1.name);
//      printf("student roll = %d\n", s1.roll);
//      printf("student cgpa = %f\n", s1.cgpa);

//      return 0;
// }

//void printInfo(struct student s1)



typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main(){
    coe s1;
    s1.roll = 59;
    s1.cgpa = 9.00;
    strcpy(s1.name, "asmatullah");

    printf("student name is : %s\n", s1.name);

    return 0;
}