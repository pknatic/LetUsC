/* If the value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios. */
#include<stdio.h>
#include<math.h>
#define pi 3.14159265359
int main()
{
    float angle,radian;
    printf("Enter the angle = ");
    scanf("%f",&angle);
    radian=angle*(pi/180);
    printf("sin(%.2f) = %f\n",angle,sin(radian));
    printf("cos(%.2f) = %f\n",angle,cos(radian));
    printf("tan(%.2f) = %f\n",angle,tan(radian));
    printf("cosec(%.2f) = %f\n",angle,1/sin(radian));
    printf("sec(%.2f) = %f\n",angle,1/cos(radian));
    printf("cot(%.2f) = %f\n",angle,1/tan(radian));
    return 0;
}
