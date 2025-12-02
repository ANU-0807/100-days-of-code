//Q94. Find the longest word in a sentence.//

#include <stdio.h>
int main() {
    char s[300];
    char longest[100];
    int i = 0, len = 0, maxLen = 0, start = 0;
    gets(s);
    while (1) {
        if (s[i] == ' ' || s[i] == '\0') {
            if (len > maxLen) {
                maxLen = len;
                int k, idx = start;
                for (k = 0; k < len; k++)
                    longest[k] = s[idx + k];
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1;
            if (s[i] == '\0') break;
        } else {
            len++;
        }
        i++;
    }
    puts(longest);
    return 0;
}

