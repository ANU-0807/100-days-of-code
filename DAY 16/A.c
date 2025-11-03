// Q31. Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    long long binary = 0;
    int rem, place = 1;
    while (n != 0) {
        rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }
    printf("Binary = %lld", binary);
    return 0;
}
