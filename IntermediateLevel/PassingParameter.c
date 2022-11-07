#include <stdio.h>

typedef struct Student
{
    char name[30];
    char rollNumber[10];
    char department[40];
    int fees;
} Student;

void Student1( char Name[], char RollNumber[], char Department[], int Fees)
{
    printf("%s %s %s %d",Name,RollNumber,Department,Fees);
}

void main()
{
    Student student;
    scanf("%s%s%s%d",student.name,student.rollNumber,student.department,&student.fees);
    Student1(student.name,student.rollNumber,student.department,student.fees);
}
