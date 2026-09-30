#include <stdio.h>

// Function prototype
int calculate_power(int voltage, int current);

int main(void){
    int voltage = 12;
    int current = 2;

    int power = calculate_power(voltage, current);

    pringf("Power: %d W\n", power);

    return 0;
}

int calculate_power(int voltage, int current){
    return voltage * current;
}