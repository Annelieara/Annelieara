#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNumber;
    char department[20];
    int fees;
} Student;

void StudentDetails(Student *studentdata)
{
    printf("Name: %s\nRollNumber: %d\nDepartment :%s\nFees: %d" ,studentdata->name, studentdata->rollNumber, studentdata->department, studentdata->fees);
}

void main()
{
    Student student1 = {0};
    Student *studentpointer = &student1;

    printf("Enter student details(name,rollNumber,department,fees):");
    scanf("%s%d%s%d", studentpointer->name,&studentpointer->rollNumber, studentpointer->department, &studentpointer->fees);

    StudentDetails(studentpointer);
}