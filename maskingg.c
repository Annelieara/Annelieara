#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int zero_cnt=0,one_cnt=0;
    int mask=1,i=0;
    while(i!=8)
    {
        if((a & mask)==0)
            zero_cnt++;
        else
            one_cnt++;
            a=a>>1;
            i++;
    }
    printf("no. of zero's is %d\nno. of one is %d",zero_cnt,one_cnt);
}