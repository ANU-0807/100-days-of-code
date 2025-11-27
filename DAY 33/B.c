//Q66. Insert an element in a sorted array at the appropriate position.//

#include <stdio.h>
int main() {
    int n, i, key;
    scanf("%d", &n);
    int a[n+1];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for(i = n-1; i >= 0 && a[i] > key; i--) a[i+1] = a[i];
    a[i+1] = key;
    for(i = 0; i <= n; i++) printf("%d ", a[i]);
    return 0;
}

