//Q132. Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.//

#include <stdio.h>
enum Light {RED, YELLOW, GREEN};
int main() {
    enum Light l = GREEN;
    if (l == RED) printf("Stop");
    else if (l == YELLOW) printf("Wait");
    else printf("Go");
    return 0;
}

