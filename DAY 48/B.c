//Q96. Reverse each word in a sentence without changing the word order.//

#include <stdio.h>
int main() {
    char s[300];
    int i = 0, start = 0;
    gets(s);
    while (1) {
        if (s[i] == ' ' || s[i] == '\0') {
            int l = start, r = i - 1;
            while (l < r) {
                char t = s[l];
                s[l] = s[r];
                s[r] = t;
                l++; r--;
            }
            if (s[i] == '\0') break;
            start = i + 1;
        }
        i++;
    }
    puts(s);
    return 0;
}

