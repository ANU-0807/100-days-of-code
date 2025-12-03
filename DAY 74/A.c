//Q124. Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().//

#include <stdio.h>
int main() {
    FILE *fs, *fd;
    char src[50], dest[50];
    char ch;
    printf("Enter source filename: ");
    scanf("%s", src);
    printf("Enter destination filename: ");
    scanf("%s", dest);
    fs = fopen(src, "r");
    fd = fopen(dest, "w");
    if (fs == NULL || fd == NULL) {
        printf("File error.\n");
        return 0;
    }
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }
    fclose(fs);
    fclose(fd);
    printf("File copied successfully.\n");
    return 0;
}

