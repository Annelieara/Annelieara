#include<stdio.h>
#include<math.h>
int main()

{
    signed char a=1;
    int b;
    for(;;)
    {
        printf("%d\n",a);
        a++;
        b++;
        if(b==256)
        break;
    }
}