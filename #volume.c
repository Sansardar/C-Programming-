                                                                          //program to find the volume of a cube, sphere, and cylinder.
#include<stdio.h>
#define PI 3.1415
main()
{
int s, r, h;
printf ("\nVolume of Cube");
printf ("\nEnter the side:");
scanf ("%d", &s);
printf ("\nThe Volume of a cube is: %d", 6*s*s);
printf ("\nVolume of Sphere");
printf ("\nEnter the radius:");
scanf ("%d", &r);
printf ("\nThe Volume of a sphere is: %.2f", 4*PI*r*r);
printf ("\nVolume of Cylinder");
printf ("\nEnter the radius:");
scanf ("%d", &r);
printf ("\nEnter the height:");
scanf ("%d", &h);
printf ("\nThe Volume of a cylinder is: %.2f", 2*PI*r*(r+h));
}
