#include <stdio.h>
#include <stdbool.h>

typedef enum{
    SYSTEM_IDLE,
    SYSTEM_RUNNING,
    SYSTEM_FAULT
} SystemState;

typedef struct{
    SystemState state;
    int temperature_f;
    int battery_percent;
    bool motor_enabled;
} SystemStatus;

void print_system_status(const SystemStatus *status){
    printf("Temperature: %d F\n", status->temperature_f);
    printf("Battery: %d%%\n", status->battery_percent);
    printf("Motor enabled: %s\n",
        status->motor_enabled ? "Yes" : "No");

    switch (status->state){
        case SYSTEM_IDLE:
            printf("State: IDLE\n");
            break;

        case SYSTEM_RUNNING:
            printf("State: RUNNING\n");
            break;

        case SYSTEM_FAULT:
            printf("State: FAULT\n");
            break;

        default:
            printf("State: UNKNOW\n");
            break;
    }
}

int main(void){
    SystemStatus system = {
        SYSTEM_RUNNING,
        72,
        85,
        true
    };

    print_system_status(&system);

    return 0;
}