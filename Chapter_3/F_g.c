/* Given the coordinates, (x,y) of the center of a circle and its radius, write a program that will determine whether a point lines inside the circle, on the circle, or outside the circle. 
(hint:use sqrt( )and pow( ) function.) */
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,r;
    float pc;
    printf("Enter the center co-ordinates of the circle = ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the radius of the circle = ");
    scanf("%d",&r);
    printf("Enter the point of co-ordinates ");
    scanf("%d %d",&x2,&y2);
    // formula for check distance between point and center point of circle 
    pc=sqrt(pow(x2-x1,2)+pow(y2-y1,2)); 
    printf("Pc = %f\n",pc);
    if(pc>r)
        printf("point (%d,%d) lines outside the circle.",x2,y2);
    else if (pc<r)
        printf("point (%d,%d) lines inside the circle.",x2,y2);
    else if (pc==r)
        printf("point (%d,%d) lines on the boundry of circle.",x2,y2);
    else
        printf("Wrong Entry");
    return 0;
}
