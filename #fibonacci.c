                                                                                        //  program to print the Fibonacci series.
#include <stdio.h>
main()
{
int a=0,b=1,c=0, n;
printf ("\nEnter a number: ");
scanf ("%d", &n);
printf ("\nFibonacci Series: \n");
printf ("%d\n%d\n",a,b);
c=a+b;
while (c<=n)
{
printf ("%d\n", c);
a=b;
b=c;
c=a+b;
}
}
