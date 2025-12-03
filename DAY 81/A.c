//Q131. Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.//

#include <stdio.h>
enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
int main() {
    for (int i = SUNDAY; i <= SATURDAY; i++)
        printf("%d\n", i);
    return 0;
}

