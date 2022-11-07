#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNumber;
    char department[20];
    int fees;
} Student;

void structStudent()
{
    Student student = {0};
    scanf("%s%d%s%d", student.name, &student.rollNumber, student.department, &student.fees);
    printf("%s %d %s %d", student.name,student.rollNumber, student.department,student.fees);
}

void main()
{
    structStudent();
}