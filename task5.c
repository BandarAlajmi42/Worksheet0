#include <stdio.h>
#include <string.h>

void swap(void *x, void *y, size_t size) {
    char temp[size];
    memcpy(temp, x, size);
    memcpy(x, y, size);
    memcpy(y, temp, size);
}

int main(void) {
    int a = 10;
    int b = 20;
    
    printf("Before : a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After : a = %d, b = %d\n", a, b);
    
    double x = 3.14;
    double y = 2.71;
    
    printf("Before : x = %.2f, y = %.2f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After : x = %.2f, y = %.2f\n", x, y);
    
    return 0;
}
