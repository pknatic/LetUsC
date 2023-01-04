/* Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.*/
#include <stdio.h>
int main()
{
float x,power=1;
int y,i=1;
printf("Enter two numbers - ");
scanf("%f %d",&x,&y);
while(i<=y)
{
    power = power*x;
    i++;
}
printf("%.0f to the power %d is = %.2f ",x,y,power);
    return 0;
}
