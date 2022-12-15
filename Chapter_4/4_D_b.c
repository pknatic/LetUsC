/* In the digital world, colors are specified in Red-Green-Blue (RGB) format, with values of R, G, and B varying on an integer scale from 0 to 255. In print publishing, the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae: 
white = max(red/255,green/255,blue/255)
cyan=((white-red/255)/white)
magenta=((white-green/255)/white)
yellow=((white-blue/255)/white)
black=1-white
Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1. */
#include<stdio.h>
#include<math.h>
int main()
{
    float r,g,b,c,m,y,k,w,max;
    printf("Enter The value of r = ");
    scanf("%f",&r);
    printf("Enter The value of g = ");
    scanf("%f",&g);
    printf("Enter The value of b = ");
    scanf("%f",&b);
    if(r==0 && g==0 && b==0)
    {   c=y=m=0;
        k=1;
        printf("cyan=%f\nmagenta=%f\nyellow=\f\nblack=%f\n",c,m,y,k);
    }
    else
    {
        r=r/255;
        g=g/255;
        b=b/255;
        max=r; //supposed max=red
        if (g>max)
        max=g;
        if (b>max)
        max=b;
        w=max;
        c=(w-r)/w;
        m=(w-g)/w;
        y=(w-b)/w;
        k=1-w;
        printf("cyan   =%f\nmagenta=%f\nyellow =%f\nblack  =%f\n",c,m,y,k);      
    }
    return 0;
}
