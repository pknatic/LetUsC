/* Using the Conditional operator determine the following :
Whether a character entered through the keyboard is a special symbol or not.*/
#include<stdio.h>
int main()
{    char y;
    printf("Enter the Symbol =  ");
    scanf("%c",&y);
    ((y>0 && y<47) || (y>58 && y<64) || (y>91 && y<96) || (y>123 && y<127)? printf("Entered character is special symbol."):printf("Enter charater is not a special symbol."));
    return 0;
}
