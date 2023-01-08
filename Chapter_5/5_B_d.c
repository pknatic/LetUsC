/* Write a program to enter numbers till the user wants. At the end it should display the count of positive,negative,zeros entered. */
#include<stdio.h>
int main()
{
int num,zero,posi,neg;
char ans = 'y';
posi=zero=neg=0;
while(ans=='y'|| ans=='Y')
{    
    printf("Enter the number  = ");
    scanf("%d",&num);
    if (num==0)
    zero++;
    else if (num>0)
    posi++;
    else if (num<0)
    neg++;
    fflush(stdin); // The function fflush(stdin) is used to flush the output buffer of the stream.
    printf("Do you want to play more = ");
    scanf("%c",&ans);
}
    
    printf("\nTotal positve numbers = %d",posi);
    printf("\nTotal negative numbers = %d",neg);
    printf("\nTotal zero numbers = %d",zero);
     return 0;
}
