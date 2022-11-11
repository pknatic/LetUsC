/*The length and the breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of a rectangle, and the area and circumference of the circle.*/
#include<stdio.h>
int main()
{
float l,b,r,area1,area2,peri,cir;
printf("Enter the length of rectangal = ");
scanf("%f",&l);
printf("Enter the length of Breadth = ");
scanf("%f",&b);
area1=l*b;   /*formula for area of rectangular*/
peri=2*l+2*b;/*formula for perimeter of rectangular*/
printf("Area Of Rectangal = %.2f \n",area1);
printf("Perimeter Of Rectangal = %.2f \n",peri);
/*calculate Circle area and circumference */
printf("Enter the redius of circul = ");
scanf("%f",&r);
area2=3.14*r*r;   /*formula for area of circle*/
cir=2*r*3.14;     /*formula for circumference of circul*/
printf("Area Of circle = %.2f \n",area2);
printf("circumference of circul = %.2f \n",cir);
return 0;
}
