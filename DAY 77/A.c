//Q127. Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
//

#include <stdio.h>
int main() {
    FILE *fi, *fo;
    char ch;
    fi = fopen("input.txt", "r");
    fo = fopen("output.txt", "w");
    if (fi == NULL || fo == NULL) {
        printf("File error.\n");
        return 0;
    }
    while ((ch = fgetc(fi)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, fo);
    }
    fclose(fi);
    fclose(fo);
    printf("Conversion completed.\n");
    return 0;
}

