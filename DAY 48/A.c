//Q95. Check if one string is a rotation of another.//

#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100], temp[200];
    gets(a);
    gets(b);
    if (strlen(a) != strlen(b)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(temp, a);
    strcat(temp, a);
    if (strstr(temp, b))
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}

