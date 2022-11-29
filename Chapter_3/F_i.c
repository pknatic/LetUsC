/* According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out the day on 1st January of this year. */
#include<stdio.h>
int main()
{
int yr,day,basic_year=1900,total_years,leap_days;/**/
printf("Enter the year = ");
scanf("%d",&yr);
total_years=(yr-1)-basic_year;/*We'll got Total no. of  years */
printf("Total Years between basic and Entered = %d\n",total_years);
leap_days=total_years/4; /*We'll got Total no. of leap days*/
printf("Total leap days  = %d\n",leap_days);
day=(total_years*365)+leap_days+1; /*We'll Got total days */
printf("Total Days = %d\n",day);
day=day%7; /*We need Remainder For Identify the day*/
if (day==0)
    {
        printf("The fisrt day of the year %d = Monday ",yr);
    }
if (day==1)
    {
        printf("The fisrt day of the year %d = Tuesday ",yr);
    }
if (day==2)
    {
        printf("The fisrt day of the year %d = Wednesday ",yr);
    }
if (day==3)
    {
        printf("The fisrt day of the year %d = Thursday ",yr);
    }
if (day==4)
    {
        printf("The fisrt day of the year %d = Friday ",yr);
    }
if (day==5)
    {
        printf("The fisrt day of the year %d = Saturday ",yr);
    }
if (day==6)
    {
        printf("The fisrt day of the year %d = Sunday ",yr);
    }
    return 0;
}
