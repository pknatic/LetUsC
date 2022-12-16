/* Using the Conditional operator determine the following :
Whether the character entered through the keyboard is a lowercase alphabet or not. */
#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character =  ");
    scanf("%c",&x);
    (x>96 && x<123 ? printf("Entered charater is small case alphabet.\n "):printf("Enter charater is not a small case alphabet.\n"));
   return 0;
}
