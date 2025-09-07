//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
int l, b, a, p;

printf("Enter length and breadth of rectangle:", l, b);
scanf("%d %d", &l, &b);
a = l*b;
p = 2*(l+b);
printf("The area of rectangle is: %d\n", a);
printf("The perimeter of rectangle is: %d\n", p);
return 0;
}
