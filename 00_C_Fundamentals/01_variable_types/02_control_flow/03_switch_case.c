#include <stdio.h>

int main(void){
    int mode = 2;

    switch (mode){
        case 0:
            printf("Robot mode: IDLE\n");
            break;

        case 1:
            printf("Robot mode: MANUAL\n");
            break;

        case 2:
            printf("Robot mode: Autonomous\n");
            break;

        case 3:
            printf("Robot mode: ERROR\n");
            break;

        default:
            printf("Robot mode: UNKNOWN\n");
            break;
    }

    return 0;   
}