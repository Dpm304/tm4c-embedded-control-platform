
#include <stdio.h>
#include <stdint.h>
#include <stdatomic.h>

static atomic_uint_least32_t event_count = ATOMIC_VAR_INIT(0U);

static void sensor_interrupt_handler(void){
    (void)atomic_fetch_add_explicit(&event_count, 1U, memory_order_relaxed);
}

int main(void){
    uint_least32_t snapshot;

    printf("Initial events: %lu\n",
           (unsigned long)atomic_load_explicit(&event_count,memory_order_relaxed));

    sensor_interrupt_handler();
    sensor_interrupt_handler();
    sensor_interrupt_handler();

    snapshot = atomic_load_explicit(
        &event_count,
        memory_order_relaxed
    );

    printf("Events processed: %lu\n", (unsigned long)snapshot);

    return 0;
}
