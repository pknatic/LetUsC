/*Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard, Write a program to compute the smallest number of notes that will combine to give Rs. N. */
#include<stdio.h>
int main()
{
    int amount, nohun, nofifty, noten, nofive, notwo, noone, total;
    printf("Enter The Amount = ");
    scanf("%d",&amount);
    nohun=amount/100;
    amount=amount%100;
    nofifty=amount/50;
    amount=amount%50;
    noten=amount/10;
    amount=amount%10;
    nofive=amount/5;
    amount=amount%5;
    notwo=amount/2;
    amount=amount%2;
    noone=amount/1;
    amount=amount%1;
    total=nohun+nofifty+noten+nofive+notwo+noone;
    printf("Notes of 100 = %d \n",nohun);
    printf("Notes of 50 = %d \n",nofifty);
    printf("Notes of 10 = %d \n",noten);
    printf("Notes of 5 = %d \n",nofive);
    printf("Notes of 2 = %d \n",notwo);
    printf("Notes of 1 = %d \n",noone);
    printf("Smallest Number Of Notes = %d\n",total);
    return 0;
}
