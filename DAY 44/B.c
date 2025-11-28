//Q88. Replace spaces with hyphens in a string.//

#include <stdio.h>
int main() {
    char s[200];
    int i = 0;
    gets(s);
    while (s[i] != '\0') {
        if (s[i] == ' ')
            s[i] = '-';
        i++;
    }
    puts(s);
    return 0;
}

