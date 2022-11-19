/*In a company, an employee is paid as under. If his basic salary is less than ₹1500 then HRA = 10% of his basic salary and DA = 90% of his basic salary. if his salary is either equal to or above ₹1500, then HRA = ₹500 and DA = 98% of basic salary. If the employee's salary is input through the keyboard write a program to find his gross salary.*/
#include <stdio.h>
int main()
{
float bs,gs,da,hra;
printf("Enter basic salary = ");
scanf("%f",&bs);
if(bs<1500)
{
    hra=bs*10/100;
    da=bs*90/100;
}
else
{
    hra=500;
    da=bs*98/100;
}
gs=bs+hra+da;
printf("HRA = Rs.%.2f\n",hra);
printf("DA = Rs.%.2f\n",da);
printf("Gross Salary %.2f + %.2f + %.2f = %.2f",bs,hra,da,gs);
    return 0;
}
