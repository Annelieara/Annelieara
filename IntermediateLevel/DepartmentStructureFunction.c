#include <stdio.h>
#include <string.h> 
#include <stdbool.h>

typedef struct Student
{
    char name[50];
    int rollNumber;
    char department[10];
    int fees;
} Student;

bool PrintStudent(int totalStudents, Student *studentReference,char requiredDepartment[])
{
    for(int iteration = 0; iteration < totalStudents; iteration++)
    {
        if((strcmp(studentReference[iteration].department, requiredDepartment)) ==0 )
        {
            printf("%s is Studying in %s department \n", studentReference[iteration].name, requiredDepartment);
        }
    }
    return true;
}

void main()
{
    int totalStudents = 0;

    printf("Enter totalStudent number of student : ");
    scanf("%d", &totalStudents);

    Student studentList[totalStudents];

    for(int iteration = 0; iteration < totalStudents; iteration++)
    {
        printf("Enter Details of student %d :\n",(iteration+1));
        printf("name : ");
        scanf("%s", studentList[iteration].name);
        printf("rollNumber : ");
        scanf("%d", &studentList[iteration].rollNumber);
        printf("department : ");
        scanf("%s", studentList[iteration].department);
        printf("fees : ");
        scanf("%d", &studentList[iteration].fees);
    }

    char requiredDepartment[40] = {0};
    printf("Enter Required Department:");
    scanf("%s",requiredDepartment);

    if(PrintStudent(totalStudents, studentList, requiredDepartment) == true)
    {
        printf("executed succesfully");
    }
}
