#include <stdio.h>

typedef struct student
{
    char name[20];
    int rollNumber;
    char department[20];
    int fees;
} student;

void studentFunction( char name[], int rollNumber, char department[], int fees)
{
    printf("%s %d %s %d\n", name, rollNumber, department, fees);
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

    studentFunction(wage1.name, wage1.rollNumber, wage1.department, wage1.fees);
    studentFunction(wage2.name, wage2.rollNumber, wage2.department, wage2.fees);
    studentFunction(wage3.name, wage3.rollNumber, wage3.department, wage3.fees);
    studentFunction(wage4.name, wage4.rollNumber, wage4.department, wage4.fees);
}
