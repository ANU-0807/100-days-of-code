//Q140. Define a struct with enum Gender and print person's gender.//

#include <stdio.h>
enum Gender {MALE, FEMALE};
struct Person {
    char name[20];
    enum Gender g;
};
int main() {
    struct Person p = {"Rahul", MALE};
    if (p.g == MALE) printf("Gender: Male");
    else printf("Gender: Female");
    return 0;
}

