//Q145. Return a structure containing top student's details from a function.//

#include <stdio.h>
struct Student {
    char name[20];
    float marks;
};
struct Student topStudent() {
    struct Student s = {"Aman", 95.5};
    return s;
}
int main() {
    struct Student t = topStudent();
    printf("%s %.2f", t.name, t.marks);
    return 0;
}

