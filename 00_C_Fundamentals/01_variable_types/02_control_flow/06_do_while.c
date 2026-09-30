#include <stdio.h>

int main(void){
    int count = 0;

    do{
        printf("System initialization attempt: %d\n", count + 1);
        count++;
    } while (count < 3);

    printf("Initialization sequence complete.\n");

    return 0;
}