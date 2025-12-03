//Q137. Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.//

#include <stdio.h>
enum Role {ADMIN, USER, GUEST};
int main() {
    enum Role r = ADMIN;
    if (r == ADMIN) printf("Admin Access");
    else if (r == USER) printf("User Access");
    else printf("Guest Access");
    return 0;
}

