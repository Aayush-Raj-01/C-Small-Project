#include <stdio.h>

int compareFiles(char *file1, char *file2) {
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    
    if (f1 == NULL || f2 == NULL) {
        printf("Error opening files!\n");
        return 0;
    }
    int ch1, ch2;
    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        if (ch1 != ch2) {
            fclose(f1);
            fclose(f2);
            return 0;
        }
    }
    int same = (fgetc(f1) == EOF && fgetc(f2) == EOF);
    
    fclose(f1);
    fclose(f2);
    return same;
}
int main() {
    char file1[50], file2[50];
    
    printf("Enter first file name: ");
    scanf("%s", file1);
    printf("Enter second file name: ");
    scanf("%s", file2);
    
    if (compareFiles(file1, file2))
        printf("Files are IDENTICAL\n");
    else
        printf("Files are DIFFERENT\n");
    
    return 0;
}
