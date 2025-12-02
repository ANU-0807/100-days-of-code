//Q112. Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.//

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int maxSum = a[0], curr = a[0];
    for (int i = 1; i < n; i++) {
        curr = (curr + a[i] > a[i]) ? curr + a[i] : a[i];
        if (curr > maxSum) maxSum = curr;
    }
    printf("%d", maxSum);
    return 0;
}

