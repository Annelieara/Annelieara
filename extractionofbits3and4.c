#include<stdio.h>
int main()
{
    int inputvalue;
    scanf("%d",&inputvalue);
    int bitmask=0x18;
    int extractedbits=inputvalue&bitmask;
    int decimaleqt=extractedbits>>3;
    printf("%d",decimaleqt);
    return 0;
}