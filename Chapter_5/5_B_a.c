/* Write a program to print all the ANSII values and their equivalent characters using a while loop. The ANSII values vary from 0 to 255. */ 
#include <stdio.h>
int main()
{
int i;
i=0;
while(i<=256)
{
    printf("\n ANSII Value %d is %c",i,i);
    i++;
}
    return 0;
}
