//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
int r, a, c ;

printf("Enter radius of circle:", r);
scanf("%d", &r);
a = 3.14 * r * r;
c = 2 * 3.14 * r;
printf("The area of cirlce is: %d\n", a);
printf("The circumference of circle is: %d\n", c);
return 0;
}
