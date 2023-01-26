#include<stdio.h>
#define PI 3.14
main()
{

     
     float radius,len, wid, b, h, area_t,area_r,area_c;

     //find the area of a Circle
     printf("Enter Radius of Circle(in cm): ");
     scanf("%f",&radius);
     area_c = PI * radius * radius;
     printf("Area of Circle = %.2f cm\n",area_c);
     
     //find the area of a Rectangle
     printf("Enter length & width of Rectangle (in cm): ");
     scanf("%f %f",&len,&wid);
     area_r = len * wid;
     printf("Area of Rectangle= %.3f cm\n",area_r);
     
     // find Area of triangle
     printf("Enter base & height  of triangle(in cm): ");
     scanf("%f %f", &b, &h);
     area_t = (0.5 * b * h);
     printf("Area of triangle= %.2f cm\n",area_t);
     
 }
