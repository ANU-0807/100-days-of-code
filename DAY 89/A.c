//Q139. Show that enums store integers by printing assigned values.//

#include <stdio.h>
enum Test {X=5, Y=15};
int main() {
    printf("X = %d\nY = %d", X, Y);
    return 0;
}

