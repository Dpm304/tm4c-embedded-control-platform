#include <stdio.h>

int main(void){
    int values[4] = {10, 20, 30, 40};
    int *ptr = values;

    printf("Value: %d\n", *ptr);
    ptr++;

    printf("Value: %d\n", *ptr);
    ptr++;

    printf("Value: %d\n", *ptr);
    ptr++;

    printf("Value: %d\n", *ptr);

    return 0;
}