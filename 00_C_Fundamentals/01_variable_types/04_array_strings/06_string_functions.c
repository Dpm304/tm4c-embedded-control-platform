#include <stdio.h>
#include <string.h>

int main(void){
    char command[] = "START";
    char response[20];

    strcpy(response, command);

    printf("Command: %s\n", command);
    printf("Response: %s\n", response);
    printf("Command length: %zu\n", strlen(command));

    return 0;
}