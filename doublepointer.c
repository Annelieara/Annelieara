#include<stdio.h>
int main()

{
    int arr[3]={10,20,30};
    int *ptr=&arr,index,**ptr1=&ptr;
    printf("%d\n",arr);
    printf("%d\n",&ptr);
    printf("%d\n",ptr);
    printf("%d\n",**ptr1);
    for(index=0;index<3;index++)
    {
        printf("%d\n",*(ptr+index));
        printf("%d\n",(ptr+index));
    }
}