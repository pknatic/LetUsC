/* A company insurance its drivers in the following cases:
--If the driver is married.
--If the driver is unmarried, male & above 30 years of age.
--If the driver is unmarried, female, and above 25 years of age.
In all other cases, the driver is not insured. if the marital status, sex, and age of the driver are inputs, write a program to determine whether the driver is should be insured or not. */
#include<stdio.h>
int main()
{
char sex,ms;
int age;
printf("Enter age,sex,marital status ");
scanf("%d %c %c",&age,&sex,&ms);
printf("age = %d\nsex = %c\nMarital status = %c\n",age,sex,ms);
if((ms=='M') || (ms=='U' && sex=='M' && age>30) || (ms=='U' && sex=='F' && age>25))
printf("Driver should be insured.");
else
printf("Driver should not be insured.");
    return 0;
}
