//Q87. Count spaces, digits, and special characters in a string.//

#include <stdio.h>
int main() {
    char s[200];
    int i = 0, sp = 0, d = 0, sc = 0;
    gets(s);
    while (s[i] != '\0') {
        if (s[i] == ' ')
            sp++;
        else if (s[i] >= '0' && s[i] <= '9')
            d++;
        else if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
            sc++;
        i++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial chars = %d\n", sp, d, sc);
    return 0;
}

