/* According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out the day on 1st January of this year. */
#include<stdio.h>
int main()
{
int year,days,normal_days,leap_days;
printf("Enter the year = ");
scanf("%d",&year);
normal_days=(year-1)*365;//all normal days
leap_days=(year/4)+(year/400)-(year/100);/* Which years devided by 400 and 4 are leap years but which years devided by 100 are not leap years. */
days=normal_days+leap_days; //total days 
days=days%7; /*We need Remainder For Identify the day*/
if (days==0)
    {
        printf("The fisrt day of the year %d = Monday ",year);
    }
if (days==1)
    {
        printf("The fisrt day of the year %d = Tuesday ",year);
    }
if (days==2)
    {
        printf("The fisrt day of the year %d = Wednesday ",year);
    }
if (days==3)
    {
        printf("The fisrt day of the year %d = Thursday ",year);
    }
if (days==4)
    {
        printf("The fisrt day of the year %d = Friday ",year);
    }
if (days==5)
    {
        printf("The fisrt day of the year %d = Saturday ",year);
    }
if (days==6)
    {
        printf("The fisrt day of the year %d = Sunday ",year);
    }
    return 0;
}
