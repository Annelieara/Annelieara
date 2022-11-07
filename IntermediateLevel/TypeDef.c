#include <stdio.h>

typedef struct Student
{
    char name[20];
    char rollnumber[10];
    char department[10];
    char fees[10];
} Student;

void main()
{
    Student details1 = {0};
    Student details2 = {0};
    Student details3 = {0};
    Student details4 = {0};
     
    scanf("%s%s%s%s", details1.name, details1.rollnumber, details1.department, details1.fees);
    scanf("%s%s%s%s", details2.name, details2.rollnumber, details2.department, details2.fees);
    scanf("%s%s%s%s", details3.name, details3.rollnumber, details3.department, details3.fees);
    scanf("%s%s%s%s", details4.name, details4.rollnumber, details4.department, details4.fees);

    printf("%s %s %s %s \n", details1.name, details1.rollnumber, details1.department, details1.fees);
    printf("%s %s %s %s \n", details2.name, details2.rollnumber, details2.department, details2.fees);
    printf("%s %s %s %s \n", details3.name, details3.rollnumber, details3.department, details3.fees);
    printf("%s %s %s %s \n", details4.name, details4.rollnumber, details4.department, details4.fees);
}
