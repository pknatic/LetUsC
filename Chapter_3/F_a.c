/*A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.*/
#include <stdio.h>
int main()
{
int n1,n2,n3,n4,n5;
int num,rev,com;
num=com;
printf("Enter the number = ");
scanf("%ld",&num);
n5=num%10; num=num/10;
n4=num%10; num=num/10; 
n3=num%10; num=num/10;
n2=num%10; num=num/10;
n1=num%10;
rev=n5*10000+n4*1000+n3*100+n2*10+n1;
printf("\nReverse number is = %ld ",rev);
num=n1*10000+n2*1000+n3*100+n4*10+n5;
if(num>rev)
{
    printf("\nActual number is grater than reverse number ");
}
if(rev>num)
{
    printf("\nReverse number is grater than actual number ");
}
if(num==rev)
{
    printf("\nActual number and reverse number are equal");
}
return 0;
}
