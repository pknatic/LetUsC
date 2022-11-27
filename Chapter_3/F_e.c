/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle length = 5 and breadth = 4 is greater than its perimeter.*/
#include <stdio.h>
int main()
{
    int l,b,ar,peri; 
    printf("Enter The length = ");
    scanf("%d",&l);
    printf("Enter The breadth = ");
    scanf("%d",&b);
    peri=2*(l+b); //peremeter of the rectangle 
    ar=l*b;  //area of rectangle 
    if (peri>ar)
        {
            printf("Perimeter is grater than area");
        }
    else
        {
            printf("area is grater than peremeter");
        }
    return 0;
}
