/*The distance between two cities (in Kilometers) is input through the keyboard. Write a program to convert and print this distance in meters feet,inches and centimeters.*/
/*Conversion of distance*/
#include <stdio.h>
int main()
{
    float km,m,cm,feet,inch;
    printf("\n Enter the distance in kilometers = ");
    scanf("%f",&km);
    m=km*1000; //formula for convert meters to kilometers
    cm=m*100;  //formula for convert centimeters to meters 
    inch=cm/2.54;   //formula for convert inches to centimeters 
    feet=inch/12;  //formula for convert feet to inches
    printf("Distance in meters = %.2f\n",m);
    printf("Distance in centimeters = %.2f\n",cm);
    printf("Distance in inch = %.2f\n",inch);
    printf("Distance in feet = %.2f\n",feet);    
    return 0;
}
