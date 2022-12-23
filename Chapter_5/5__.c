/* Write a program to calculate the overtime pay for 10 employees. Overtime is paid at Rs. 120.00 per hour for every hour worked above 40 hours. Assume that employees do not work for the fractional part of an */
#include <stdio.h>
int main()
{
float otpay;
int hour,i=1;
while(i<=10) 
{
    printf("Enter no. of hours worked = ");
    scanf("%d",&hour);
    if(hour>=40)
    otpay=(hour-40)*120;
    else
    otpay= 0;
    printf("Hours = %d Overtime pay = Rs.%.2f\n",hour,otpay);
    i++;
}
    return 0;
}
