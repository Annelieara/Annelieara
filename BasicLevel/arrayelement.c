#include<stdio.h>
int main()
{
    int size;
    
    scanf("%d",&size);
    int array[size],index;
    for(index=0;index<size;index++)
    {
        scanf("%d",&array[index]);
    }
    for(index=0;index<size;index++)
    {
        printf("%d ",array[index]);
    }
}