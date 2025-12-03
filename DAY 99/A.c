//Q 149 Use malloc() to allocate structure memory dynamically and print details. //

#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
};
int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));
    s->roll = 10;
    printf("%d", s->roll);
    free(s);
    return 0;
}
