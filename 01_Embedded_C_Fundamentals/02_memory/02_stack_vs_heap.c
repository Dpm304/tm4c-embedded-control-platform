#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define BUFFER_LENGTH 8U

int main(void){
    uint8_t stack_buffer[BUFFER_LENGTH] = {0U};
    uint8_t *heap_buffer = malloc(BUFFER_LENGTH * sizeof(*heap_buffer));

    if(heap_buffer == NULL){
        printf("Heap allocation failed.\n");
        return 1;
    }

    for(size_t i = 0U; i < BUFFER_LENGTH; i++){
        stack_buffer[i] = (uint8_t)(i + 1U);
        heap_buffer[i] = (uint8_t)((i + 1U) * 10U);
    }

    printf("Stack buffer: ");

    for(size_t i = 0U; i < BUFFER_LENGTH; i++){
        printf("%u ", (unsigned int)stack_buffer[i]);
    }

    printf("\nHeap buffer: ");

    for (size_t i = 0U; i < BUFFER_LENGTH; i++){
        printf("%u ", (unsigned int)heap_buffer[i]);
    }

    printf("\n");
    free(heap_buffer);
    heap_buffer = NULL;

    return 0;
}