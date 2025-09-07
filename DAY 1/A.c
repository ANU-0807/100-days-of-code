#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Check range using bitwise operators instead of &&, ||
    if ((n >= 0) & (n <= 50))
        printf("LOW\n");
    else if ((n >= 51) & (n <= 100))
        printf("MEDIUM\n");
    else if ((n >= 101) & (n <= 500))
        printf("HIGH\n");
    else
        printf("OUT OF RANGE\n");

    return 0;
}
