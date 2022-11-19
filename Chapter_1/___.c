/*
Ramesh's basic salary is input through the keyboard. His Dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
*/
/*Calculate Ramesh's gross salary.*/
#include <stdio.h>
int main()
{
    float bp,da,hra,gpay; //bp=basic pay da= dearness sllowance hra=house rent allowance
    printf("\nEnter basic salary of Ramesh : ");
    scanf("%f",&bp);
    da=0.4*bp; // dearness allowance 40% of basic pay
    hra=0.2*bp;  //  house rent allowance 20% of basic pay
    gpay=bp+da+hra; // gross pay
    printf("Basic Salary of Ramesh = %.2f\n",bp);
    printf("Dearness Allowance = %.2f\n",da);
    printf("House Rent Allowance = %.2f\n",hra);
    printf("Gross pay of Ramesh is  = %.2f\n",gpay);
return 0;
}
