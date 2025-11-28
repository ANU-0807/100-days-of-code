//Q92. Find the first repeating lowercase alphabet in a string.//

#include <stdio.h>
int main() {
    char s[200];
    int freq[26] = {0}, i = 0;
    gets(s);
    while (s[i] != '\0') {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("%c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
        i++;
    }
    printf("No repeating lowercase alphabet\n");
    return 0;
}

