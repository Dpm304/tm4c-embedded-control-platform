#include <stdio.h>

int main(void){
    char command[] = "START";

    printf("Command: %s\n", command);
    printf("First character: %c\n", command[0]);
    printf("Second character: %c\n", command[1]);

    return 0;
}