#include<stdio.h>
void main()

{
    int n,b,d=0,base=1,r;
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        r=n%10;
        d=d+r*base;
        n=n/10;
        base=base*2
        ;
    }
    printf("%d",d);
}