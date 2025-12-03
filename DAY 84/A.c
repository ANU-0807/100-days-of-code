//Q134. Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.//

#include <stdio.h>
enum Status {SUCCESS, FAILURE, TIMEOUT};
int main() {
    enum Status s = SUCCESS;
    if (s == SUCCESS) printf("Operation Successful");
    else if (s == FAILURE) printf("Operation Failed");
    else printf("Operation Timed Out");
    return 0;
}

