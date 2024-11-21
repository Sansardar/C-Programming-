                                               //program to accept 2 numbers. Using functions that accept parameter
                                                              //perform the following tasks:
                                                                  //1. Add 2 numbers
                                                                  //2. Find the square of the first number
                                                                  //3. Find cube of the second number Print the sum, square and cube.
#include <stdio.h>
sum(int x, int y);
square(int a);
cube(int b);
main()
{
int a, b;
printf("ENTER A and B: ");
scanf("%d %d", &a, &b);
sum(a, b);
square(a);
cube(b);
}
sum(int x, int y)
{
int c;
c=x+y;
printf("\nSUM is: %d", c);
}
square(int a)
