/*Write a program to find the absolute value of a number entered through the keyboard.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    if (num<0)
    {
        num=num*-1;
        printf("Absolute value of this number is = %d",num);
    }
    else
    {
        printf("Absolute value of this number is = %d",num);
    }
    
    return 0;
}
