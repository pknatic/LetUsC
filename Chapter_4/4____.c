/* Write a program to calculate the salary as per the following table.*/
#include<stdio.h>
int main()
{
char qual,gen,m,f,p,g;//m=male,f=female,p=post-graduate,g=graduate
int sal=0,exp;
printf("Enter The Gender,Year of Service,Qualification : ");
scanf("%c %d %c",&gen,&exp,&qual);
     if(gen=='m' && exp>=10 && qual=='p')
sal=11000;
else if(gen=='m' && exp>=10 && qual=='g')
sal=10000;
else if(gen=='m' && exp<10 && qual=='p')
sal=10000;
else if(gen=='m' && exp<10 && qual=='g')
sal=7000;
else if(gen=='f' && exp>=10 && qual=='p')
sal=12000;
else if(gen=='f' && exp>=10 && qual=='g')
sal=9000;
else if(gen=='f' && exp<10 && qual=='p')
sal=10000;
else if(gen=='f' && exp<10 && qual=='g')
sal=6000;
printf("Salary Of The Employee = %d ",sal);
    return 0;
}
