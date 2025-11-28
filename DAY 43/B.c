//Q86. Check if a string is a palindrome.//

#include <stdio.h>
int main() {
    char s[100];
    int i = 0, j, len = 0, flag = 1;
    gets(s);
    while (s[len] != '\0')
        len++;
    j = len - 1;
    for (i = 0; i < j; i++, j--) {
        if (s[i] != s[j])
            flag = 0;
    }
    if (flag) printf("Palindrome\n");
    else printf("Not palindrome\n");
    return 0;
}
