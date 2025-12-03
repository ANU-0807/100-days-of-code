//Q136. Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.//

#include <stdio.h>
enum Menu {ADD=1, SUBTRACT, MULTIPLY};
int main() {
    enum Menu m = MULTIPLY;
    int a = 10, b = 5;
    switch(m) {
        case ADD: printf("%d", a+b); break;
        case SUBTRACT: printf("%d", a-b); break;
        case MULTIPLY: printf("%d", a*b); break;
    }
    return 0;
}

