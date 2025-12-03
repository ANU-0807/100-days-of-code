//Q128. Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.//

#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char t = ch | 32;
            if (t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}

