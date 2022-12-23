/* Suppose we wish to calculate simple interest for 3 sets of values of principle, Number of years, and rate of interest. */
#include <stdio.h>
int main()
{
    int p,n,count;
    float r,si;
    count=1;
    while(count<=3)
    {
        printf("\n Enter Values of p,n and r ");
        scanf("\n %d%d%f",&p,&n,&r);
        si=p*n*r/100;
        printf("Simple interest = Rs.%f\n",si);
        count=count+1;
    }
    return 0;
}
