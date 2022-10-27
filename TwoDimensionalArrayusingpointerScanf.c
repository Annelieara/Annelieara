#include<stdio.h>
int main()
{
    int number[3][4];
    int *pointer = &number[0][0];
    int row = 3, column = 4, total = row * column, index , index1 , index2;
    for(index1 = 0;index1 < 3;index1++)
    {
        for(index2 = 0;index2 < 4;index2++)
        {
            scanf("%d", &number[index1][index2]);
        }
    }
    for(index = 0;index < total;index++)
    {
        printf("%d ",*(pointer + index));
    }
    return 0;
}