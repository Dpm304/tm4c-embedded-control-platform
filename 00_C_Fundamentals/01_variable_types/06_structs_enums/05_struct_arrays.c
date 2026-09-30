#include <stdio.h>

typedef struct{
    int id;
    int temperature_f;
} SensorData;

int main(void){
    SensorData sensors[3] = {
        {1, 72},
        {2, 75},
        {3, 68}
    };

    for (int i = 0; i < 3; i++){
        printf("Sensor %d: %d F\n",
            sensors[i].id,
            sensors[i].temperature_f);
    }

    return 0;
}