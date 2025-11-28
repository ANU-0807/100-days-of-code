//Q73. Find the sum of each row of a matrix and store it in an array.//

#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j;
    int rowSum[10];
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++)
            rowSum[i] += a[i][j];
    }
    for (i = 0; i < r; i++)
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    return 0;
}

