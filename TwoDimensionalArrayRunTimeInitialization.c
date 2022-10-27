#include<stdio.h>
void main()
{
    int array[4][3];
    int i,j;
    printf("The values are :\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",array[i][j]);
        }
        printf("\n");
    }
}