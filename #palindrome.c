                                                                          // program to find whether a given number is palindrome or not.
#include <stdio.h>
main()
{
int n, revnum = 0, rem, orignum;
printf ("Enter an number: ");
scanf("%d", &n);
orignum = n;
while( n!=0 )
{
rem = n%10;
revnum = revnum*10 + rem;
n /= 10;
}
if(orignum == revnum)
printf("%d is a palindrome.", orignum);
else
printf("%d is not a palindrome.", orignum);
}
