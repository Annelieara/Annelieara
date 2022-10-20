#include<stdio.h>
struct employee
{
    char name[10];
    int age;
    int joiningdate;
};
int main()
{
    struct employee s1;
    struct employee s2;
    s1.age=20;
    s1.joiningdate=2009;
    strcpy(s1.name,"ANNELIE");
    s2.age=20;
    s2.joiningdate=2009;
    strcpy(s2.name,"RACHEAL");
    printf("%d %d %s\n",s1.age,s1.joiningdate,s1.name);
    printf("%d %d %s",s2.age,s2.joiningdate,s2.name);
    return 0;
}