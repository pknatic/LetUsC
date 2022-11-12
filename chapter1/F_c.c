/*Paper of size A0 has dimension 1189mm x 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorter sides. Thus, Paper of A1 would have dimension 841mm x 594mm. Write a program to calculate and print paper sizes A0,A1......A8.*/
#include <stdio.h>
#include <math.h>
int main()
{
int la0=1189,ba0=841,la1,ba1,la2,ba2,la3,ba3,la4,ba4,la5,ba5,la6,ba6,la7,ba7,la8,ba8;
la1=ba0; ba1=la0/2;
la2=ba1; ba2=la1/2;
la3=ba2; ba3=la2/2;
la4=ba3; ba4=la3/2;
la5=ba4; ba5=la4/2;
la6=ba5; ba6=la5/2;
la7=ba6; ba7=la6/2;
la8=ba7; ba8=la7/2;
printf("\nA0 size is = %d x %d ",la0,ba0);
printf("\nA1 size is = %d x %d ",la1,ba1);
printf("\nA2 size is = %d x %d ",la2,ba2);
printf("\nA3 size is = %d x %d ",la3,ba3);
printf("\nA4 size is = %d x %d ",la4,ba4);
printf("\nA5 size is = %d x %d ",la5,ba5);
printf("\nA6 size is = %d x %d ",la6,ba6);
printf("\nA7 size is = %d x %d ",la7,ba7);
printf("\nA8 size is = %d x %d ",la8,ba8);
    return 0;
}
