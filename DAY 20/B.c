// Q40. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    long long bin;
    printf("Enter binary number: ");
    scanf("%lld", &bin);
    long long comp = 0, place = 1, digit;
    while (bin != 0) {
        digit = bin % 10;
        if (digit == 0)
            comp += 1 * place;
        place *= 10;
        bin /= 10;
    }
    printf("1's complement = %lld", comp);
    return 0;
}
