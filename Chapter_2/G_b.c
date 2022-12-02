/*Write a program to receive Cartesian coordinates (x,y) of a point and convert them into polar coordinates (r,o).
hint: r=sqrt(x^2+y^2) and o=yan^-1(y/x).*/
#include <stdio.h>
#include<math.h>
int main()
{
float x,y,r,theta;
printf("Enter values of x,y = ");
scanf("%f%f",&x,&y);
r=sqrt((x*x)+(y*y));
theta=atan(y/x); // radian /*we also use theta = atan2(y,x) */
theta=theta*180/3.14; //radian to degree conversion
printf("Polar Co-ordinates (r,theta) = (%.2f,%.2f) ",r,theta);
    return 0;
}
