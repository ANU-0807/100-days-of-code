//Q133. Create an enum for months and print how many days each month has.//

#include <stdio.h>
enum Month {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
int main() {
    printf("February has 28 days\n");
    printf("April has 30 days\n");
    printf("January has 31 days\n");
    return 0;
}

