//Q114. Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.//

#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s", s);
    int max = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int freq[256] = {0}, len = 0;
        for (int j = i; s[j] != '\0'; j++) {
            if (freq[s[j]] == 1) break;
            freq[s[j]] = 1;
            len++;
        }
        if (len > max) max = len;
    }
    printf("%d", max);
    return 0;
}

