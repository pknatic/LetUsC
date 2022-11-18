/*While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expense. */
#include <stdio.h>
int main()
{
    int qty,dis;
    float rate,tot;
    printf("\n Enter Quantity = ");
    scanf("%d",&qty);
    printf("\n Enter The rate = ");
    scanf("%f",&rate);
    if (qty>1000)
    dis = 10;
    else
    dis = 0;
    tot=(qty*rate) - (qty*rate*dis/100);
    printf(" Total Expenses = %.2fRs.",tot);    
    return 0;
}
