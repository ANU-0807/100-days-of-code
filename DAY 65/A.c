//Q115. Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".//

#include <stdio.h>
int main() {
    char a[100], b[100];
    int c1[26] = {0}, c2[26] = {0};
    scanf("%s %s", a, b);
    for (int i = 0; a[i]; i++) c1[a[i] - 'a']++;
    for (int i = 0; b[i]; i++) c2[b[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (c1[i] != c2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}

