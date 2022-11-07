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
    int numberofStudents = 0;

    printf("Enter number of students: ");
    scanf("%d", &numberofStudents);

    Student studentDetails[numberofStudents];
    Student *studentsDetailsHolder = studentDetails;

    printf("Enter student details(name,rollNumber,department,fees):");
    for(int studentCount = 0; studentCount < numberofStudents; studentCount++)
    {
        scanf("%s%d%s%d", (studentsDetailsHolder+studentCount)->name, &(studentsDetailsHolder+studentCount)->rollNumber, (studentsDetailsHolder+studentCount)->department, &(studentsDetailsHolder+studentCount)->fees);
    }
    for(int  studentCount = 0; studentCount < numberofStudents; studentCount++)
    {
        printf("Name:%s\nRollNumber:%d\nDepartment:%s\nFees:Rs.%d\n\n",(studentsDetailsHolder+studentCount)->name, (studentsDetailsHolder+studentCount)->rollNumber, (studentsDetailsHolder+studentCount)->department, (studentsDetailsHolder+studentCount)->fees);
    }
}
