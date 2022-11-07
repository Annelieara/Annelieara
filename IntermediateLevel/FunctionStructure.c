#include <stdio.h>

typedef struct student
{
    char name[20];
    int rollNumber;
    char department[20];
    int fees;
} student;

void printstudent(student wage)
{
    printf("%s %d %s %d\n", wage.name, wage.rollNumber, wage.department, wage.fees);
}

void main()
{
    student wage1 = {0};
    student wage2 = {0};
    student wage3 = {0};
    student wage4 = {0};

    scanf("%s%d%s%d", wage1.name, &wage1.rollNumber, wage1.department, &wage1.fees);
    scanf("%s%d%s%d", wage2.name, &wage2.rollNumber, wage2.department, &wage2.fees);
    scanf("%s%d%s%d", wage3.name, &wage3.rollNumber, wage3.department, &wage3.fees);
    scanf("%s%d%s%d", wage4.name, &wage4.rollNumber, wage4.department, &wage4.fees);

    printstudent(wage1);
    printstudent(wage2);
    printstudent(wage3);
    printstudent(wage4);
}
