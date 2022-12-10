/* A year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||. */
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year = ");
    scanf("%d",&year);
    if(year%400==0 || year%100!=0 && year%4==0)
    printf("Leap year.");
    else
    printf("Not a leap year.");
    return 0;
}
