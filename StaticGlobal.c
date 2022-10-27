#include<stdio.h>

int function()
{
    static int count=6;
    count++;
    return count;
}
   int count=9;
int main()
{
    printf("%d\n",count);
    printf("%d\n", function());
    printf("%d ", function());
    return 0;
}

