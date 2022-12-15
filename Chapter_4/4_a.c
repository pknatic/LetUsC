/*If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is an isosceles, an equilateral, a scalene, or a right angle triangle.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,ang;
    printf("Enter the sides a of triangle = ");
    scanf("%d",&a);
    printf("Enter the sides b of triangle = ");
    scanf("%d",&b);
    printf("Enter the sides c of triangle = ");
    scanf("%d",&c);
    if (a==b && b==c)
    {
        printf("This is a equilanteral triangle.");
    }
    else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
    {
        printf("This is a isosceles triangle.");
    }
    else if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b))
    {
        printf("This is a right angle Triangle.\n");
    }
    else
    {
        printf("This is a scalene triangle.\n");
    }
    return 0;
}
