//Q83. Count vowels and consonants in a string.//

#include <stdio.h>
int main() {
    char s[100];
    int i = 0, v = 0, c = 0;
    gets(s);
    while (s[i] != '\0') {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char t = ch | 32;  
            if (t=='a' || t=='e' || t=='i' || t=='o' || t=='u')
                v++;
            else
                c++;
        }
        i++;
    }
    printf("Vowels = %d\nConsonants = %d\n", v, c);
    return 0;
}

