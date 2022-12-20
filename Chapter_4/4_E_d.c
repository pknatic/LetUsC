/* Write a program to receive the value of an angle in degrees and check whether the sum of squares of sine and cosine of this angle is equal to 1. */
#include<stdio.h>
#include<math.h>
#define pi 3.14159265359
int main()
{
    float angle,radian;
    printf("Enter the angle = ");
    scanf("%f",&angle);
    radian=angle*(pi/180);
    if(sin(radian)*sin(radian)+cos(radian)*cos(radian)==1)
    {
        printf("Square sum of sine and cosine is equal to 1");
    }
    else
    {
        printf("Square sum of sine and cosine is not equal to 1");
    }    
    return 0;
}

/*For better Understanding. 
{
    float angle,radian,sum1,sum2,sine,cosine;
    printf("Enter the angle = ");
    scanf("%f",&angle);
    radian=angle*(pi/180);
    printf("angle in radian = %f\n",radian);
    sine=sin(radian);cosine=cos(radian);
    printf("sine = %f\n cosine = %f\n ",sine,cosine);
    sum1=sine*sine;
    sum2=cosine*cosine;
    printf("sine square = %f\n cosine square = %f\n sum of both = %f\n",sum1,sum2,sum1+sum2);
    if(sin(radian)*sin(radian)+cos(radian)*cos(radian)==1)
    {
        printf("Square sum of sine and cosine is equal to 1");
    }
    else
    {
        printf("Square sum of sine and cosine is not equal to 1");
    }
    
    return 0;
}
*/
