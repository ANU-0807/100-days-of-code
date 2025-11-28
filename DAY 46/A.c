//Q91.Remove all vowels from a string.//

#include <stdio.h>
int main() {
    char s[200], out[200];
    int i = 0, j = 0;
    gets(s);
    while (s[i] != '\0') {
        char ch = s[i] | 32;
        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u')
            out[j++] = s[i];
        i++;
    }
    ou



