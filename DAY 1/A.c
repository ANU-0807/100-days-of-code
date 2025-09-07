//Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>
int main(){
int a,b,c;
printf("Enter two integers:");
scanf("%d %d", &a, &b);
c = a + b;
printf("The sum of the two integers is: %d\n", c);
return 0;
}
