//Q119. Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.//

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int idx = a[i] >= 0 ? a[i] : -a[i];
        if (a[idx] < 0) {
            printf("%d", idx);
            return 0;
        }
        a[idx] = -a[idx];
    }
    return 0;
}

