//Q144. Write a function that accepts a structure as parameter and prints its members.//

#include <stdio.h>
struct Student {
    char name[20];
    int roll;
};
void display(struct Student s) {
    printf("%s %d", s.name, s.roll);
}
int main() {
    struct Student s = {"Riya", 10};
    display(s);
    return 0;
}

