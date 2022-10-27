#include<stdio.h>
int main()
{
    int inputbit=0;
    scanf("%d",&inputbit);
    int bitmask=0x18;
    int extractingbits=(inputbit & bitmask);
    int equivalentdecimal=(extractingbits>>3);
    printf("%d",equivalentdecimal);
}