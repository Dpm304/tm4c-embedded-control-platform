#include <stdio.h>
#include <stdbool.h>

void motor_enable(void){
    printf("Motor enabled.\n");
}

void motor_disable(void){
    printf("Motor disabled.\n");
}

void motor_set_speed(int speed_rpm){
    printf("Motor speed set to %d RPM.\n", speed_rpm);
}

bool motor_speed_is_valid(int speed_rpm){
    return speed_rpm >= 0 && speed_rpm <=5000;
}

int main(void){
    int requested_speed_rpm = 2500;

    if (motor_speed_is_valid(requested_speed_rpm)){
        motor_enable();
        motor_set_speed(requested_speed_rpm);
    }else{
        motor_disable();
        printf("Invalid motor speed.\n");
    }

    return 0;
}