/*Any integer is input through the keyboard. write a program to find out whether it is an odd number or an even number.*/
#include <stdio.h>
int main()
{
int a;
printf("Enter the number = ");
scanf("%d",&a);
if(a%2==0)
{
    printf("The Enterred Number is Even ");
}
else
{
    printf("The Entered number is odd");
}
    return 0;
}
