//Q77. Check if the elements on the diagonal of a matrix are distinct.//

#include <stdio.h>
int main() {
    int a[10][10], n, i, j, flag = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n - 1; i++)
        if (a[i][i] == a[i + 1][i + 1])
            flag = 0;
    if (flag) printf("Distinct");
    else printf("Not distinct");
    return 0;
}

