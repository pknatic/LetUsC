/* Write a program to find factorial value of any number Entered through the keyboard. */
#include<stdio.h>
int main()
{   
    int num,i=1,fact;
    printf("Enter the number = ");
    scanf("%d",&num);
    fact=i;
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial value of %d = %d\n",num,fact);
    return 0;
}
