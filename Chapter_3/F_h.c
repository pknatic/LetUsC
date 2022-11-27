/*Given a point (x,y) write a program to find out if it lies on X-axis,Y-axis or origin.*/
#include<stdio.h>
int main()
{
    int x,y,a=0;
    printf("Enter x-axis and y-axis = ");
    scanf("%d %d",&x,&y);
    if (x==0 && y==0)
        printf("Axis are origin to co-ordinate");
    else 
        if (x==0 && y!=0)
        printf("Points lies on Y axis \n");
    else 
        if (x!=0 && y==0)
        printf("Points lies on X axis ");
    else 
        printf("Point neither lies on any axis or origin"); 
    return 0;
}
