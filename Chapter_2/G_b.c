/*Write a program to receive Cartesian coordinates (x,y) of a point and convert them into polar coordinates (r,o).
hint: r=sqrt(x^2+y^2) and o=yan^-1(y/x).*/
#include <stdio.h>
#include<math.h>
int main()
{
float x,y,r,o;
printf("Enter values of x,y =");
scanf("%f%f",&x,&y);
r=sqrt((x*x)+(y*y));
o=atan2(y,x); 
o=o*180/3.14; 
printf("result = %f\nangle =  %f ",r,o);
    return 0;
}
