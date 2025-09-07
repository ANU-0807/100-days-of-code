#include <stdio.h>
int main()
{
int a, b;
printf("Enter two integers:");
scanf("%d %d\n", &a, &b);
int c,d,e;
float f;
c = a+b;
d = a-b;
e = a*b;
printf("Sum is: %d\n", c);
printf("Difference is: %d\n", d);
printf("Product is: %d\n", e);
if (b!=0) {
f= (float)a/ b;
printf("Quotient is: %.2f\n", f);
}
else {
printf("Cannot divide by zero!\n");
}
return 0;
}
