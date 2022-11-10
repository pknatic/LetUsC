/*Temprature of a city in fahrenheit degrees is input through the keyboard. Write a program to convert this temprature into entigrade degrees.*/
#include <stdio.h>
int main()
{
float f,c;
printf("Enter the temperature of city in Fahrenheit = ");
scanf("%f",&f);
c=(f-32)/1.8;     /*formula to convert Fahrenheit to Celsius */ 
printf("temperature in centigrade = %.2f\n",c);
    return 0;
}
