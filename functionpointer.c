#include<stdio.h>
int sum1(int,int);
void main()

{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int (*ptr)(int,int);
    ptr=sum1;
    int result=(*ptr)(n1,n2);
    printf("%d",sum1(n1,n2));
}
sum1(int a,int b)
{
    return a+b;
}