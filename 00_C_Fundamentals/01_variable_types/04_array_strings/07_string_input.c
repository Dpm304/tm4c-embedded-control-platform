#include <stdio.h>

int main(void){
    char comman[32];

    printf("Enter command: ");

    if (fgets(command, sizeof(command), stdin) !=NULL){
        printf("Recieved command: %s", command);
    }

    return 0;
}