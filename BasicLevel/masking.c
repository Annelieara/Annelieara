#include<stdio.h>
int main()

{
    int a,mask=1,zero_cnt=0,one_cnt=0;
    scanf("%d",&a);
    int b=0;
    int arr[8];
    for(int i=0;i<8;i++)
    {
        b=(b*10)+(a%2);
        arr[i]=b;
        b=0;
        a=a/2;
    }
    for(int j=7;j>=0;j--)
    {
        if((arr[j] &mask) ==0)
           zero_cnt++;
        else
           one_cnt++;
    }
    printf("no. of zero's is %d\n no.of one's is %d",zero_cnt,one_cnt);
}
