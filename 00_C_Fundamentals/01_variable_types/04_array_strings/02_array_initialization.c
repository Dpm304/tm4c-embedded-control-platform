#include <stdio.h>

int main(void){
    int values_a[5] = {10, 20, 30, 40, 50};
    int values_b[] = {1, 2, 3, 4, 5};
    int values_c[5] = {10, 20};

    printf("values_a[0]: %d\n", values_a[0]);
    printf("values_b[0]: %d\n", values_b[0]);
    printf("values_c[0]: %d\n", values_c[0]);
    printf("values_c[2]: %d\n", values_c[2]);

    return 0;
}