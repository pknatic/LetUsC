/* Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D. */
#include <stdio.h>
int main()
{
    int c,d,a;
    printf("Enter the number of C = ");
    scanf("%d",&c);
    printf("Enter the number of D = ");
    scanf("%d",&d);
    a=c; 
    c=d;
    d=a;
    printf("C = %d\n",c);
    printf("D = %d\n",d);
    return 0;
}
