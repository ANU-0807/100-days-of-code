//Q129. A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.//

#include <stdio.h>
int main() {
    FILE *fp;
    int num, count = 0;
    float sum = 0;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 0;
    }
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count == 0) {
        printf("No numbers in file.\n");
        return 0;
    }
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / count);
    return 0;
}

