#include<stdio.h>
int main()
{
    int number=4;
    int *pointer=&number;
    printf("%d\n%p\n",*pointer,*pointer);
    char character='A';
    char *p=&character;
    printf("%c\n%p",*p,*p);
}