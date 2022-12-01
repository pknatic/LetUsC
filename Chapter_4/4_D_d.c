/* The Body Mass Index (BMI) is defined as the ratio of the weight of a person (in kilograms) to the square of the height (in meters). Write a program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table: */
#include<stdio.h>
int main()
{
    float height,weight,bmi_value;
    printf("Enter The weight of person = ");//Weight in kilograms
    scanf("%f",&weight);
    printf("Enter The height of person = ");//height in meters
    scanf("%f",&height);
    bmi_value=weight/(height*height);/*or we can use math.h library and put weight/pow(height,2)*/
    printf(" BMI Value = %.2f\n",bmi_value);
    if(bmi_value<15)
    {
        printf("Report = Starvation");
    }    
    else if(bmi_value>=15.10 && bmi_value<=17.59)
    {
        printf("Report = Anorexic");
    }
    else if(bmi_value>=17.60 && bmi_value<=18.59)
    {
        printf("Report = Underweight");
    }
    else if(bmi_value>=18.60 && bmi_value<=24.99)
    {
        printf("Report = Ideal");
    }
    else if(bmi_value>=25.00 && bmi_value<=25.99)
    {
        printf("Report = Overweight");
    }
    else if(bmi_value>=26.00 && bmi_value<=30.99)
    {
        printf("Report = Obese");
    }
    else if(bmi_value>=40)
    {
        printf("Report = Morbidly Obese");
    }   
    return 0;
}
