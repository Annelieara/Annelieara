#include<stdio.h>
void rev(int);
void main()

{
    rev(10);
}
void rev(int n)
{
    if(n==0)
    printf("Ended");
    else
    {
    printf("%d\n",n);
    rev(n-1);
    }
}