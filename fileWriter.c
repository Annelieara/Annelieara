#include<stdio.h>
void main()
{
    FILE *filePointer;
    filePointer = fopen("newfile.txt","w");
    fputs("sacra system", filePointer);
}