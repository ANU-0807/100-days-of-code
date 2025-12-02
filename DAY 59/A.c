//Q109. Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.//

#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int max = -100000, sum;
    for (int i = 0; i <= n - k; i++) {
        sum = 0;
        for (int j = i; j < i + k; j++) sum += a[j];
        if (sum > max) max = sum;
    }
    printf("%d", max);
    return 0;
}

