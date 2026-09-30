#include <stdio.h>

void modify_value(int value){
    value = 100;
}

int main(void){
    int number = 10;

    printf("Before function: %d\n", number);

    modify_value(number);

    printf("After function: %d\n", number);

    return 0;
}