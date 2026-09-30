#include <stdio.h>

int main(void){
    int sensor_samples[3][4] = {
        {10 ,20, 30, 40},
        {15, 25, 35, 45},
        {12, 22, 32, 42}
    };

    for (int sensor = 0; sensor < 3; sensor++){
        printf("Sensor %d:\n", sensor);

        for (int sample = 0; sample < 4; sample++){
            printf(" Sample %d: %d\n",
                sample,
            sensor_samples[sensor][sample]);
        }
    }

    return 0;
}