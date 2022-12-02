/* The wind-chill factor is the felt air temperature on exposed skin due to wind. the wind chill temperature is always lower than the air temperature,and is calculated as per the following formula
wcf=35.74+0.6215t+(0.4275t-35.75)*v^0.16
where t is temperature and v is wind velocity. Write a program to receive values of t and v and calculate. */
#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,wct;
    printf("Enter The Temprature = ");
    scanf("%f",&t);
    printf("Enter The Velocity = ");
    scanf("%f",&v);
    wct=35.74+0.6215*t+((0.4275*t)-35.75) * pow(v,0.16);
    printf("Wind chill factor = %f",wct);
    return 0;
}
