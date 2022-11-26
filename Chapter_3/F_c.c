/*Write a program to check whether a triangle is valid or not, if three angles of the triangle are entered through the keyboard. The triangle is valid if the sum of all three angles is equal to 180 degrees.*/
#include <stdio.h>
int main()
{
int a,b,c,sum;
printf("Enter Triangle Angle A ");
scanf("%d",&a);
printf("Enter Triangle Angle B ");
scanf("%d",&b);
printf("Enter Triangle Angle C ");
scanf("%d",&c);
sum=a+b+c;
if(sum==180)
    {
        printf("\nValid Triangle");
    }
    else
    {
        printf("\nNot A Valid Triangle");
    }
    return 0;
}
