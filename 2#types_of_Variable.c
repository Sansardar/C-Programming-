#include <stdio.h>
main( )
{
int a, b, c=11;
char d, e, f='m';
float g, h, i=2.0;
double j, k, l=3.0;
a = 12;
d = 'a';
g = 4.0;
j = 5.0;
printf("Enter character value: ");
scanf("%c",&e);
printf("Enter integer value: ");
scanf("%d",&b);
printf("Enter floating-point value: ");
scanf("%f",&h);
printf("Enter double value: ");
scanf("%lf",&k);
printf("Integer values are %d %d %d\n", a, b, c);
printf("Character values are %c %c %c\n", d, e, f);
printf("Floating-point values are %f %f %f\n", g, h, i);
printf("Double values are %lf %lf %lf\n", j, k, l);
}
