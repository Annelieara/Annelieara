#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNumber;
    char department[20];
    int fees;
} Student;

void main()
{
    Student details[5] ;

    printf("Enter student details(name,rollNumber,department,fees):");
    for(int i =0; i<5; i++)
    {
    scanf("%s%d%s%d", details[i].name, &details[i].rollNumber, details[i].department, &details[i].fees);
    }
    for(int i=0; i<5; i++)
    {
    printf("Name:%s\nRollNumber:%d\nDepartment:%s\nFees:Rs.%d\n", details[i].name, details[i].rollNumber, details[i].department, details[i].fees);
    }
}
