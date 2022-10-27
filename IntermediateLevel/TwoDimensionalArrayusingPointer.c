#include<stdio.h>
int main()
{
    int number[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *pointer = &number[0][0];
    int row = 3, column = 4, total = row * column, index;
    for(index = 0;index < total;index++)
    {
        printf("%d ", *(pointer + index));
    }
    return 0;
}