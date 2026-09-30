#include <stdio.h>

int main(void){
    int temperature;

    printf("Enter temperature (F): ");
    scanf("%d", &temperature);

    if (temperature < 32){
        printf("Temperature is below freezing.\n");
    }else if (temperature <= 85){
        printf("Temperature is within normal range.\n");
    }else{
        printf("Temperature is high.\n");
    }

    return 0;
}