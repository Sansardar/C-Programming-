                                                                              //a program to reverse the digits of an integer.
#include <stdio.h>
main()
{
int n;
printf ("\nEnter a number : ");
scanf ("%d", &n);
printf ("\nReverse is : ");
while (n>0)
{
printf ("%d", n%10);
n=n/10;
}
}
