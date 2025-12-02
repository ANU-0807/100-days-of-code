//Q106. Write a program to take an array arr[] of integers as input. The task is to find the next greater element for each element of the array in order of their appearance in the array. The next greater element of an element in the array is the nearest element on the right that is greater than the current element. If there does not exist a next greater element of the current element, then the next greater element for the current element is -1.
N.B:
- Print the output for each element in a comma-separated fashion.
- Do not use Stack, use a brute force approach (nested loop) to solve.//

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int found = -1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                found = a[j];
                break;
            }
        }
        printf("%d", found);
        if (i != n - 1) printf(", ");
    }
    return 0;
}

