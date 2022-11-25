/*If the ages of Ram, Shyam, and Ajay are input through the keyboard, write a program to determine the youngest of the tree.*/
#include <stdio.h>
int main()
{
int ram,shyam,ajay,age;
printf("Enter Age of Ram = ");
scanf("%d",&ram);
printf("Enter Age of Shyam = ");
scanf("%d",&shyam);
printf("Enter Age of Ajay = ");
scanf("%d",&ajay);
if (ram<shyam && ram<ajay)
{
    printf("Ram is younger");
}
if (shyam<ram && shyam<ajay)
{
    printf("Shyam is younger");
}
if (ajay<shyam && ajay<ram)
{
    printf("Ajay is younger");
}
    return 0;
}
