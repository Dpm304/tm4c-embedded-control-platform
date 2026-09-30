#include <stdio.h>

int calculate_temp_diff(int current_f, int target_f){
    return current_f - target_f;
}

int main(void){
    int current_temp_f = 80;
    int target_temp_f = 75;

    int diff_f;

    diff_f = calculate_temp_diff(
        current_temp_f,
        target_temp_f
    );

    printf("Temperature difference: %d F\n", diff_f);

    return 0;
}