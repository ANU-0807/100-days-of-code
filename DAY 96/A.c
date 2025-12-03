//Q146. Create Employee structure with nested Date structure for joining date and print details.//

#include <stdio.h>
struct Date {
    int d, m, y;
};
struct Employee {
    int id;
    struct Date join;
};
int main() {
    struct Employee e = {1, {10, 5, 2024}};
    printf("ID: %d\nDate: %d/%d/%d", e.id, e.join.d, e.join.m, e.join.y);
    return 0;
}

