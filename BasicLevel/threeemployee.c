#include<stdio.h>
#include<string.h>
struct Employeerec 
{
    char name[20];
    int age;
    int year;
};
int main()

{
    struct Employeerec Emp1 = {"ANNELIE", 20, 2001};
    struct Employeerec Emp2 = {"MARY", 18, 2004};
    struct Employeerec Emp3 = {"JUNGKOOK", 24, 1997};
    printf("%s %d %d\n", Emp1.name, Emp1.age, Emp1.year);
    printf("%s %d %d\n", Emp2.name, Emp2.age, Emp2.year);
    printf("%s %d %d\n", Emp3.name, Emp3.age, Emp3.year);
    return 0;
}