//Q81. Count characters in a string without using built-in length functions.//

#include <stdio.h>
int main() {
    char s[100];
    int i = 0;
    gets(s);
    while (s[i] != '\0')
        i++;
    printf("Length = %d\n", i);
    return 0;
}

