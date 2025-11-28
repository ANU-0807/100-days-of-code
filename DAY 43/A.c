//Q85. Reverse a string.//

#include <stdio.h>
int main() {
    char s[100];
    int i = 0, j, len = 0;
    gets(s);
    while (s[len] != '\0')
        len++;
    j = len - 1;
    for (i = 0; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    puts(s);
    return 0;
}

