//Q99. Change the date format from dd/04/yyyy to dd-Apr-yyyy.//

#include <stdio.h>
int main() {
    char date[20];
    char month[12][4] = {"Jan", "Feb", "Mar", "Apr"," May", "Jun",
                         "Jul","Aug", "Sep","Oct", "Nov" ,"Dec"};
    int d, m, y;
    gets(date);
    sscanf(date, "%d/%d/%d", &d, &m, &y);
    printf("%02d-%s-%d\n", d, month[m-1], y);
    return 0;
}

