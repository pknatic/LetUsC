/* Write a program to find the greatest of the three numbers entered through the keyboard. Use conditional operators. */
#include<stdio.h>
int main()
{
    int n1,n2,n3,big;
    printf("Enter First number = ");
    scanf("%d",&n1);
    printf("Enter Second number = ");
    scanf("%d",&n2);
    printf("Enter third number = ");
    scanf("%d",&n3);
    big=(n1>n2)&&(n1>n3)?n1:(n2>n1)&&(n2>n3)?n2:(n3>n1)&&(n3>n2)?n3:printf("All are same.\n");
    // big= n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3); 2nd method
    printf("Biggest number is %d \n",big);
    return 0;
}
