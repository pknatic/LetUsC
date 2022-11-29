/*Write a program to calculate the division obtained by the student.*/
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in five subjects \n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;
    printf("Percentages of student = %d\n",per);
    if (per>60)
    {
        printf("First Devision\n");
    }
    else
    {
        if(per>=50)
        printf("Second Devision");
        else 
        {
            if(per>=40)
            printf("Third Devision");
            else
            {
                if(per<40);
                printf("Fail");
            }

        }
    }
    return 0;
}
