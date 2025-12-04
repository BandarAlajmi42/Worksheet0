#include <stdio.h>

int compare_arrays(int *arr1, int *arr2, int length) {
    if (arr1 == NULL || arr2 == NULL) {
        return 0;
    }
    
    for (int i = 0; i < length; i++) {
        if (*(arr1 + i) != *(arr2 + i)) {
            return 0;
        }
    }
    
    return 1;
}

int main(void) {
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {1, 2, 3, 4, 5};
    int array3[5] = {1, 2, 3, 4, 6};
    
    printf("array1 == array2: %d\n", compare_arrays(array1, array2, 5));
    printf("array1 == array3: %d\n", compare_arrays(array1, array3, 5));
    printf("NULL test: %d\n", compare_arrays(NULL, array2, 5));
    
    return 0;
}
