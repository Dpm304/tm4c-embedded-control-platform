#include <stdio.h>

typedef enum{
    MOTOR_STOPPED,
    MOTOR_RUNNING,
    MOTOR_FAULT
} MotorState;

int main(void){
    MotorState state = MOTOR_RUNNING;

    printf("Motor state: %d\n", state);

    return 0;
}