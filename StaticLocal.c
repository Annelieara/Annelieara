#include<stdio.h>
int function()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d", function());
    printf("%d", function());
    return 0;
}