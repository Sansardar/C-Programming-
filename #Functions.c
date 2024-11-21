                                                          //1. First function will accept two numbers and print the sum
                                                          //2. Second function will accept one number and print the cube
#include <stdio.h>
sum();
cube();
main()
{
sum();
cube();
}
sum()
{
int a, b;
printf("ENTER A and B: ");
scanf("%d %d", &a, &b);
printf("\nSUM IS %d", a+b);
}
cube()
{
int x;
printf("\nENTER X: ");
scanf("%d",&x);
printf("\ncube is %d", x*x*x);
}
