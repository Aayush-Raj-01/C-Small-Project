#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int));  // allocate memory

    if (arr == NULL) {  // always check allocation
        printf("Memory allocation failed\n");
        return 1;
    }

    // use the allocated memory
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);          // free allocated memory
    return 0;
}
