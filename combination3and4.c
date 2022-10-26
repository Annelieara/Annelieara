#include<stdio.h>
int main()

{
    int a,m=8;
    scanf("%d",&a);
    int sum1=0,sum2=0,sum=0;
    sum1=((a&m) *1);
    sum1=sum1>>3;
    m=m<<1;
    sum2=((a&m) *2);
    sum2=sum2>>4;
    printf("%d",sum1+sum2);
}
