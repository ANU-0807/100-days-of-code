// Q 150 Use pointer to struct to modify and display data using -> operator.//

#include <stdio.h>
struct Student {
    int roll;
};
int main() {
    struct Student s = {25};
    struct Student *p = &s;
    p->roll = 50;
    printf("%d", p->roll);
    return 0;
}

