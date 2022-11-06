/*Calculation of simple interest*/
#include <stdio.h>
int main()
{
    int p,t; //p=Principal Amount , t=Time (Years)
    float r,si,sum; // r=Rate Per Anum , Si=Amount Included Interest
    printf("Enter Principle Amount =  ");
    scanf("%d",&p);
    printf("Enter Time  =  ");
    scanf("%d",&t);
    printf("Enter Rate of interest =  ");
    scanf("%f",&r);
    si=p*t*r/100;  /*formula simple interest*/
    sum=si+p;
    printf("Total Interest = %.2f\n",si); //%.2f For Short the float value
    printf("Net Payble Amount = %d + %.2f = %.2f \n",p,si,sum);
    return 0;
}
