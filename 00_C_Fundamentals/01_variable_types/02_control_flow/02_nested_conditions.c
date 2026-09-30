#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool motor_enabled = true;
    bool fault_active = false;
    int temperature_f = 75;

    if (motor_enabled){
        if (fault_active){
            printf("Motor disabled due to fault.\n");

        }else if (temperature_f > 100){
            printf("Motor disabled due to high temperature.\n");
        }else{
            printf("Motor running normally.\n");
        }
    }else{
        printf("Motor is disabled.\n");
    }
    
    return 0;
}