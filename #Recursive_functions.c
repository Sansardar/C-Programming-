                                                      // a program to find the factorial of a number using recursive function.
#include <stdio.h>
int n_fact(int n);
main()
{
int n, res;
printf ("Enter number to find factorial: ");
scanf ("%d", &n);
res=n_fact(n);
printf ("Factorial is %d", res);
}
int n_fact (int n)
{
int result;
if ( n == 0 )
result = 1;
else
result = n * n_fact ( n-1 );
return (result);
}
