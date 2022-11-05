/*Calculation of simple interest*/
#include <stdio.h>
int main()
{
    int p,t;  //p=Principal Amount , t=Time (Years)
    float r,si;  // r=Rate Per Anum , Si=Amount Included Interest
    p=1000;
    t=3;
    r=8.5;
    si=p*t*r/100;  /*formula simple interest*/
    printf("\nPrinciple Amount = %d ",p);
    printf("\nTime             = %d ",t);
    printf("\nRate Per Anum    = %f ",r);
    printf("\nTotal Amount     = %f ",si);
    return 0;
}