/*Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit of the number is equal to the number itself, then the number is called Armstrong. For example,153=(1*1*1)+(5*5*5)+(3*3*3).*/
#include <stdio.h>
int main()
{
    int i=1,a,b,c,x;
    printf("Armstrong Numbers Between 1 & 500 : \n");
    while (i<=500)
    {   
        a=i%10;     //For last Digit of the number 
        b=i%100;    //for second digit of the number 
        b=(b-a)/10; //for second digit of the number 
        c=i/100;    //for First digit of the number 
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
        {printf("%d\n",i);}
        i++;
    }
    return 0;
}

//Additional Program 

/* Write a program to print out all Armstrong numbers between 1 and 9999. If the sum of power 4 of each digit of the number is equal to the number itself, then the number is called Armstrong. */
// #include <stdio.h>
// int main()
// {
//     int i=1,a,b,c,d,x;
//     printf("Armstrong Numbers Between 1 & 9999 : \n");
//     while (i<=9999)
//     {   
//         a=i%10;
//         b=i%100;
//         b=(b-a)/10;
//         c=i%1000;
//         c=(c-(b*10)-a)/100;
//         d=i/1000;
//         if((a*a*a*a)+(b*b*b*b)+(c*c*c*c)+(d*d*d*d)==i)
//         {printf("%d\n",i);}
//         i++;    
//      }
//     return 0;
// }

