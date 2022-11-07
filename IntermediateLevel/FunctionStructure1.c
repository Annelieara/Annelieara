#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNumber;
    char department[20];
    int fees;
} Student;

void StudentDetails(Student student)
{
    printf("Name: %s\nRollNumber: %d\nDepartment :%s\nFees: %d" ,student.name, student.rollNumber, student.department, student.fees);
}

void main()
{
    Student student = {0};

    printf("Enter student details(name,rollNumber,department,fees):");
    scanf("%s%d%s%d", student.name,&student.rollNumber, student.department, &student.fees);

    StudentDetails(student);
}
