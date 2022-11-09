/*If the marks obtained by a student in a five different subjects are input through the keyboard ,write a program to find out the aggregate marks are percentage marks obtained by the student. Assume the maximum marks can that can be obtained by the student in each subject is 100.*/
#include<stdio.h>
int main()
{
float m1, m2, m3, m4, m5, total, per;
printf("Enter the marks of hindi = ");
scanf("%f",&m1);
printf("Enter the marks of English =  ");
scanf("%f",&m2);
printf("Enter the marks of Maths =  ");
scanf("%f",&m3);
printf("Enter the marks of Chemistory =  ");
scanf("%f",&m4);
printf("Enter the marks of Physics =  ");
scanf("%f",&m5);
total=m1+m2+m3+m4+m5;
per=total*100/500;
printf("Total marks=%.2f\n",total);
printf("Total percentage=%.2f\n",per);
return 0;
}
