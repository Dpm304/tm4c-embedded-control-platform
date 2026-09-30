#include <stdio.h>

typedef struct{
    int motor_speed;
    int motor_direction;
    int motor_enabled;
} MotorStatus;

int main(void){
    MotorStatus motor = {
        0,
        1,
        0
    };

    printf("Speed: %d\n", motor.motor_speed);
    printf("Direction: %d\n", motor.motor_direction);
    printf("Enabled: %d\n", motor.motor_enabled);

    motor.motor_speed = 75;
    motor.motor_enabled = 1;

    printf("\nUpdated motor:\n");
    printf("Speed: %d\n", motor.motor_speed);
    printf("Direction: %d\n", motor.motor_direction);
    printf("Enabled: %d\n", motor.motor_enabled);

    return 0;
}