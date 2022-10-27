#include<stdio.h>
void main()
{
    int arr[5]={2,4,6,8,10};
    int*p,i;
    p=&arr[0];
    for(i=0;i<5;i++)
    printf("%u\n",*(p+i));
}
// hello 
