#include <stdio.h>
// Review M - Give empty line 

struct student
{
    // Review M - Follow the coding guidelines for the variable names
    // Review M - All variables should be in smaller camel case
    char name[20];
    char rollNumber[10];
    char department[10];
    char fees[10];
};
// Review M - Give empty line 

void main()
{
    struct student details;
    // Review M - Give empty line 

    scanf("%s", details.name);
    scanf("%s", details.rollNumber);
    scanf("%s", details.department);
    scanf("%s", details.fees);
    // Review M - Give empty line 

    printf("%s\n %s\n %s\n %s \n", details.name, details.rollNumber, details.department, details.fees);
}

// Review M - Don't give any unwanted spaces    