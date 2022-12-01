/* According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out the day on 1st January of this year. */
<stdio.h>
int main()
{
int yr,day,normal_days,leap_days;
printf("Enter the year = ");
scanf("%d",&yr);
normal_days=(yr-1)*365;/*we use -1 because entered year is not completed their 365 days*/
printf("%d\n",normal_days);
leap_days=((yr-1)/4+(yr-1)/400)-(yr-1)/100;/*As per rule which year fully devided by 4 and 400 is a leap year and which not devide is not a leap year*/
printf("%d\n",leap_days);
day=normal_days+leap_days;/* we enterd +1 because we want to the day of 01/01/YEAR.*/
printf("%d\n",day);
day=day%7; /*We need Remainder For Identify the day*/
printf("%d\n",day);
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
