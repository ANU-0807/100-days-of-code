//Q 148. Take two structs as input and check if they are identical.//

#include <stdio.h>
struct Data {
    int x;
    float y;
};
int main() {
    struct Data a = {2, 3.5}, b = {2, 3.5};
    if (a.x == b.x && a.y == b.y)
        printf("Identical");
    else
        printf("Not Identical");
    return 0;
}


