#include <stdio.h>

typedef struct Student
{
    char name[20];
    char rollnumber[10];
    char department[10];
    int fees;
} Student;

void main()
{
    Student *student1Pointer = {0};
    Student *student2Pointer = {0};
    Student *student3Pointer = {0};
    Student *student4Pointer = {0}; 

    Student student1 = {0};
    Student student2 = {0};
    Student student3 = {0};
    Student student4 = {0};

    student1Pointer = &student1;
    student2Pointer = &student2;
    student3Pointer = &student3;
    student4Pointer = &student4;
     
    scanf("%s%s%s%d", student1Pointer->name,student1Pointer->rollnumber,student1Pointer->department,&student1Pointer->fees);
    scanf("%s%s%s%d", student2Pointer->name,student2Pointer->rollnumber,student2Pointer->department,&student2Pointer->fees);
    scanf("%s%s%s%d", student3Pointer->name,student3Pointer->rollnumber,student3Pointer->department,&student3Pointer->fees);
    scanf("%s%s%s%d", student4Pointer->name,student4Pointer->rollnumber,student4Pointer->department,&student4Pointer->fees);

    printf("%s %s %s %d \n",student1Pointer->name,student1Pointer->rollnumber,student1Pointer->department,student1Pointer->fees);
    printf("%s %s %s %d \n",student2Pointer->name,student2Pointer->rollnumber,student2Pointer->department,student2Pointer->fees);
    printf("%s %s %s %d \n",student3Pointer->name,student3Pointer->rollnumber,student3Pointer->department,student3Pointer->fees);
    printf("%s %s %s %d \n",student4Pointer->name,student4Pointer->rollnumber,student4Pointer->department,student4Pointer->fees);
}
