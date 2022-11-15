/*If a five digit number input through the keyboard,write to program to calculate the sum of its digits. (Hint: use the modulus operator %)*/
#include <stdio.h>
int main()
{
int num,sum,a1,a2,a3,a4,a5;
printf("Enter five digit no. = ");
scanf("%d",&num);
a1=num%10;
num=num/10;
a2=num%10;
num=num/10;
a3=num%10;
num=num/10;
a4=num%10;
num=num/10;
a5=num%10;
sum=a1+a2+a3+a4+a5;
printf("sum of %d + %d + %d + %d + %d = %d",a1,a2,a3,a4,a5,sum);
    return 0;
}