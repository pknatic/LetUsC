/* Given the point of (x1,y1),(x2,y2), and (x3,y3), write a program to check if the three points fall on one straight line. */
/* Three Different type of solution */

//this code only work on positive x and y axis.
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float x1,y1,x2,y2,x3,y3;
//    float s1,s2;
//    printf("Enter The points of x1,y1 = ");
//    scanf("%f%f",&x1,&y1);
//    printf("Enter The points of x2,y2 = ");
//    scanf("%f%f",&x2,&y2);
//    printf("Enter The points of x1,y1 = ");
//    scanf("%f%f",&x3,&y3);
//    s1=(x2-x1)/(y2-y1);
//    s2=(x3-x2)/(y3-y2);
//    if (s1==s2)
//        {
//            printf("pointrs creates a straight line.");
//        }
//    else
//        {
//            printf("pointrs are not create a staright line.");
//        }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//int x1,y1,x2,y2,x3,y3,zero;
//printf("Enter The axix point of x1 y1 = ");
//scanf("%d %d",&x1,&y1);
//printf("Enter The axix point of x2 y2 = ");
//scanf("%d %d",&x2,&y2);
//printf("Enter The axix point of x3 y3 = ");
//scanf("%d %d",&x3,&y3);
//zero=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
//if(zero==0)
//{
//    printf("These Three Points fall on a straight line.");
//}
//else
//{
//    printf("These three points not fall on a straight line.");
//}
//    return 0;
//}

#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,ab,bc,ca,abc;
printf("Enter The axix point of x1 y1 = ");
scanf("%d %d",&x1,&y1);
printf("Enter The axix point of x2 y2 = ");
scanf("%d %d",&x2,&y2);
printf("Enter The axix point of x3 y3 = ");
scanf("%d %d",&x3,&y3);
ab=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
bc=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
ca=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
abc=ab+bc;
if(abc==ca)
{
    printf("These Three Points fall on a straight line.");
}
else
{
    printf("These three points not fall on a straight line.");
}
    return 0;
}
