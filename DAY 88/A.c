//Q138. Print all enum names and integer values using a loop.//

#include <stdio.h>
enum Color {RED, BLUE, GREEN};
int main() {
    for (int i = RED; i <= GREEN; i++)
        printf("%d\n", i);
    return 0;
}

