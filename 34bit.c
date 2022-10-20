#include<stdio.h>
int main()
{
    int s,sum1=0, sum2=0, sum=0,mask=8,bit=1;
    scanf("%d",&s);
    sum1=(s&mask);
    sum=sum+((sum1>>3) & bit);
    mask=mask<<1;
    bit=bit<<1;
    sum2=(s&mask);
    sum=sum+((sum2>>3) & bit);
    printf("%d",sum);
    return 0;
}