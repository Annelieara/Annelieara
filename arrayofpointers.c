#include<stdio.h>
void main()

{
    int arr[5]={10,20,30,40,50};
    int*p[5],i;
    for(i=0;i<5;i++)
    {
        p[i]=&arr[i];
        printf("%d\n",*p[i]);
    }
}

