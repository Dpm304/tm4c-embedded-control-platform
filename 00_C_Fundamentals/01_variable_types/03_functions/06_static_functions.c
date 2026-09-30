#include <stdio.h>

static void print_debug_message(void){
    printf("Debug: system is running.\n");
}

int main(void){
    print_debug_message();

    return 0;
}