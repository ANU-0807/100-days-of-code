//Q98. Print the initials of a name with the surname displayed in full.//

#include <stdio.h>
int main() {
    char s[200];
    int i = 0, last = 0;
    gets(s);
    printf("%c ", s[0]);
    while (s[i] != '\0') {
        if (s[i] == ' ' && s[i+1] != ' ') {
            last = i + 1;
            printf("%c ", s[last]);
        }
        i++;
    }
    printf("%s", &s[last]);
    return 0;
}

