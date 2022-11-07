#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[50];
    int rollNumber;
    char department[10];
    int fees;
} Student;

void PrintStudent(Student student)
{
    if(!(strcmp(student.department,"EEE")))
    printf("%s\n", student.name );
}

void main()
{
    int total = 0;
    scanf("%d" , &total);

    Student student[total];
    
    for(int index = 0; index < total;index++)
    {
        scanf("%s%d%s%d",student[index].name, &student[index].rollNumber, student[index].department, &student[index].fees);
    }

    for(int index = 0; index < total;index++)
    {
        PrintStudent(student[index]);
    }
}