#include <stdio.h>
int main() {
    FILE *fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n"); 
        return 1;
     }
    fprintf(fp, "Hello, File I/O!\n");
    fclose(fp);
    printf("Data written to file.\n");
    return 0;
}