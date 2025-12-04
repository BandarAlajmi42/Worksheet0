#include <stdio.h>

int main(void) {
    int arr[3] = {10, 30, 2000};
    int *ptr = arr;
    
    for (int i = 0; i < 3; i++) {
        printf("Element: %d, Pointer: %p\n", *(ptr + i), (void*)(ptr + i));
    }
    
    return 0;
}
