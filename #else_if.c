                                                                                //a program to check whether the number is positive, negative or zero.
#include <stdio.h>
main()
{
int n;
printf ("Enter a number: ");
scanf ("%d", &n);
if (n<0)
printf ("Number entered is NEGATIVE");
else if (n>0)
printf ("Number entered is POSITIVE");
else
printf ("Number entered is ZERO");
}
