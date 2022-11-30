/* A certain grade of steel is graded according to the following conditions:
1.	Hardness must be greater than 50.
2.	Carbon content must be less than 0.7.
3.	Tensile strength must be greater than 5600. 
The grades are as follows:
The grade is 10 if all Three conditions are met.
The grade is 9 if conditions 1 and 2 are met.
The grade is 8 if conditions 2 and 3 are met.
The grade is 7 if conditions 1 and 3 are med.
Grade 6 if only one condition is met.
Grade 5 if none of the conditions are met.
Write a program, which will require the user to give values of hardness, carbon content, and tensile strength of steel under consideration and output the grade of the steel. */
#include<stdio.h>
int main()
{
float hardness,carbon,tensile;
printf("Enter the hardness of steel = ");
scanf("%f",&hardness);
printf("Enter the carbon of steel = ");
scanf("%f",&carbon);
printf("Enter the tensile of steel = ");
scanf("%f",&tensile);
if(hardness>=50 && carbon<=0.7 && tensile>=5600)
{
    printf("Grade 10 ");
}
else if(hardness>=50 && carbon<0.7)
{
    printf("Grade 9 ");
}
else if(carbon<=0.7 && tensile>=5600)
{
    printf("Grade 8 ");
}
else if(hardness>=50 && tensile>=5600)
{
    printf("Grade 7");
}
else if(hardness>=50 || carbon<=0.7 || tensile>=5600)
{
    printf("Grade 6");
}
else
{
    printf("Grade 5");
}    
    return 0;
}
