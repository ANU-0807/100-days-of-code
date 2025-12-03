//Q147. Store employee data in a binary file using fwrite() and read using fread().//

#include <stdio.h>
struct Employee {
    int id;
};
int main() {
    FILE *fp;
    struct Employee e = {101}, r;
    fp = fopen("emp.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    fp = fopen("emp.dat", "rb");
    fread(&r, sizeof(r), 1, fp);
    printf("%d", r.id);
    fclose(fp);
    return 0;
}

