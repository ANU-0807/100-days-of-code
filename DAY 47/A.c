//Q93. Check if two strings are anagrams of each other.

#include <stdio.h>
int main() {
    char a[100], b[100];
    int c1[256] = {0}, c2[256] = {0}, i = 0;
    gets(a);
    gets(b);
    while (a[i] != '\0') { c1[a[i]]++; i++; }
    i = 0;
    while (b[i] != '\0') { c2[b[i]]++; i++; }
    for (i = 0; i < 256; i++) {
        if (c1[i] != c2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}

