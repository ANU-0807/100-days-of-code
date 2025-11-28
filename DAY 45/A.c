//Q89. Count the frequency of a given character in a string.//

#include <stdio.h>
int main() {
    char s[200], ch;
    int i = 0, count = 0;
    gets(s);
    scanf("%c", &ch);
    while (s[i] != '\0') {
        if (s[i] == ch)
            count++;
        i++;
    }
    printf("Frequency = %d\n", count);
    return 0;
}

