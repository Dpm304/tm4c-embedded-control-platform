#include <stdio.h>

typedef enum{
    SYSTEM_IDLE,
    SYSTEM_RUNNING,
    SYSTEM_ERROR
} SystemState;

int main(void){
    SystemState state = SYSTEM_RUNNING;

    switch (state){
        case SYSTEM_IDLE:
            printf("System is idle. \n");
            break;

        case SYSTEM_RUNNING:
            printf("System is running. \n");
            break;

        case SYSTEM_ERROR:
            printf("System error detected.\n");
            break;
        
        default:
            printf("Unknown system state.\n");
            break;
    }

    return 0;
}