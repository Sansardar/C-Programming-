                                                                             //program to swap two numbers without using third variable.
#include <stdio.h>
main()
{
int a, b;
printf ("Enter First Number: ");
scanf("%d", &a);
printf ("Enter Second Number: ");
scanf("%d", &b);
b=b-a;
a=b+a;
b=a-b;
printf (“\nNew Value of First Number: %d”, a);
printf (“\nNew Value of Second Number: %d”, b);
}
