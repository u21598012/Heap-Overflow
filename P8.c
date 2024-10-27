#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void populate_heap(char *input) {

    printf("Heap Overflow:\n");

    char *heap_buffer1 = (char *)malloc(8);
    char *heap_buffer2 = (char *)malloc(8);

    memset(heap_buffer1, 0, 8);
    memset(heap_buffer2, 0, 8);

    printf("Before copying input:\n");
    printf("Buffer 1: %s\n", heap_buffer1);
    printf("Buffer 2: %s\n", heap_buffer2);


    strcpy(heap_buffer1, input);

    printf("After copying input:\n");
    printf("Buffer 1: %s\n", heap_buffer1);
    printf("Buffer 2: %s\n", heap_buffer2);

    free(heap_buffer1);
    free(heap_buffer2);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    populate_heap(argv[1]);
    return 0;
}


