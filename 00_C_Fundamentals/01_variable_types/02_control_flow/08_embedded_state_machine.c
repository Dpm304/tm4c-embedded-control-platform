#include <stdio.h>

int main(void){
    int state = 0;
    int event = 1;

    for (int cycle = 0; cycle < 5; cycle++){
        switch (state){
            case 0:
                printf("State: Idle\n");

                if (event == 1){
                    state = 1;
                }
                break;
            case 1:
                printf("State: Running\n");

                if (event == 2){
                    state = 2;
                }
                break;
            case 2:
                printf("State: Fault\n");

                if (event == 3){
                    state = 0;
                }
                break;
            default:
                printf("State: UNKNOWN\n");
                state = 0;
                break;
        }

        if (cycle == 1){
            event = 2;
        }else if (cycle == 3){
            event = 3;
        }
    }

    return 0;
}