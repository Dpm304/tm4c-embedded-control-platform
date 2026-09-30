#include <stdio.h>

int read_sensor(void){
    return 72;
}

int calculate_diff(int measured, int target){
    return measured - target;
}

void print_result(int measured, int diff){
    printf("Measured temperature: %d F\n", measured);
    printf("Difference from target: %d F\n", diff);
}

int main(void){
    int target_temp_f = 75;

    int measured_temp_f = read_sensor();

    int diff_f = calculate_diff(
        measured_temp_f,
        target_temp_f
    );

    print_result(
        measured_temp_f,
        diff_f
    );

    return 0;
}