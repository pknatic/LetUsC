/* If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides. */
#include<stdio.h>
int main()
{
    int side1,side2,side3,largest,sum;
    printf("Enter three sides of the triangle = ");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1>side2)
    {
        if(side1>side3)
        {
            sum=side1+side3;
            largest=side1;
        }
        else
        {
            sum=side1+side3;
            largest=side3;
        }
    }
    else
{
    if(side2>side3)
    {
        sum=side1+side3;
        largest=side2;
    }
    else
    {
        sum=side1+side2;
        largest=side3;
    }
}
if(sum>largest)
printf("The triangle is a valid triangle.");
else
printf("The triangle is invalid triangle.");
    return 0;
}
