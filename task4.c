#include <stdio.h>

int main(void) {
    FILE *file = fopen("foo.txt", "r");
    int sum = 0;
    int num;
    
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
    }
    
    fclose(file);
    printf("%d\n", sum);
    
    return 0;
}
