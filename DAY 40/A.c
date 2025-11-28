//Q79. Perform a diagonal traversal of a matrix.//

#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++) {
        printf("%d ", a[i][i]);
    }
    return 0;
}


