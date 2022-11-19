/*if a five-digit number is input through the key keyboard, write a program to reverse the number.*/
#include <stdio.h>
int main()
{
    int num,n1,n2,n3,n4,n5;
    long int rev; //for long integer value
    printf("Enter The Five-Digit number = ");
    scanf("%ld",&num); //for enter long integer value 
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n5=num%10;
    //Re Arrange Numbers 
    n1=n1*10000;
    n2=n2*1000;
    n3=n3*100;
    n4=n4*10;
    n5=n5*1;
    rev=n1+n2+n3+n4+n5;
    printf("Reverse Number = %ld",rev); //for print long integer value
    return 0;
}
