#include <stdio.h>

void print_array(int *arr, int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d ", *(arr + i * width + j));
        }
        printf("\n");
    }
}

int main(void) {
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    print_array((int *)array, 4, 3);
    
    return 0;
}
