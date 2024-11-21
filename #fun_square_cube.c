                                //a program to accept 2 numbers. Using functions that accept parameter and returns value to perform the following tasks:
                                                                            //1. Add 2 numbers
                                                                            //2. Find the square of the first number
                                                                            //3. Find cube of the second number Print the sum, square and cube.

#include <stdio.h>
int sum(int x, int y);
int square(int a);
disp (int x);
main(){
int a, b, c;
printf("ENTER A and B: ");
scanf("%d %d", &a, &b);
c = sum(a, b);
printf ("\nSum of A & B is\t: ");
disp (c);
c = square (a);
printf ("\nSquare of A is\t: ");
disp (c);
}
int sum (int x, int y){
int c;
c=x+y;
return c;
}
int square (int a){
return a*a;
}
disp (int x){
printf("%d", x);
}
