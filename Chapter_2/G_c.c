/* Write a program to receive values of latitude (L1, L2) and longitude (G1, G2) in degrees, of two places on the earth and output the distance (D) between them in nautical miles. The formula for distance in nautical miles is :
D=3963 cos^-1(sin L1 sin L2 + cos L1 cos L2 * cos(G2-G1)) */
#include<stdio.h>
#include<math.h>
#define pi 3.14159265359
int main()
{
    float l1,l2,g1,g2,d;
    printf("Enter Latitude and Longitude of place1 = ");
    scanf("%f%f",&l1,&l2);
    printf("Enter Latitude and Longitude of place2 = ");
    scanf("%f%f",&g1,&g2);
    l1=l1*pi/180; //convert degree to radian
    l2=l2*pi/180; //convert degree to radian
    g1=g1*pi/180; //convert degree to radian
    g2=g2*pi/180; //convert degree to radian
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance in nutical miles = %f ",d);
    return 0;
}
