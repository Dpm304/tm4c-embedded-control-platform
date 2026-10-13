#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Simulation state
static bool timer_event_occurred = false;
static uint32_t timer_event_count = 0U;

static void timer_interrupt_handler(void){
    timer_event_occurred = true;
    timer_event_count++;
}

int main(void){
    printf("System started.\n");
    printf("Main program is running...\n");

    // Simulate a timer event invoking it's handler.
    timer_interrupt_handler();

    if (timer_event_occurred){
        printf("Timer event detected.\n");
        printf("Events received: %lu\n", (unsigned long)timer_event_count);

        timer_event_occurred = false;
    }

    printf("Main program continues...\n");

    return 0;
}