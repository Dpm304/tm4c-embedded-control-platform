#include <stdio.h>

typedef enum{
    MOTOR_STOPPED,
    MOTOR_RUNNING,
    MOTOR_FAULT
} MotorState;

typedef struct{
    MotorState state;
    int speed;
    int direction;
} Motor;

int main(void){
    Motor motor = {
        MOTOR_RUNNING,
        75,
        1
    };

    printf("Motor speed %d\n");
    printf("Motor direction: %d\n", motor.direction);

    switch (motor.state){
        case MOTOR_STOPPED:
            printf("Motor stopped.\n");
            break;
        
        case MOTOR_RUNNING:
            printf("Motor running.\n");
            break;

        case MOTOR_FAULT:
            printf("Motor fault.\n");
            break;

        default:
            printf("Unknown motor state.\n");
            break;
    }

    return 0;
}