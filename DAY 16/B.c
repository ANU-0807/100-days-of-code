// Q32. Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int n, rev = 0, digit, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (rev == temp)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}

