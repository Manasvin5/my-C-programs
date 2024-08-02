#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define ARRAY_SIZE 1000
#define NUM_THREADS 5

// Use a different clobber register
#define COMPLEX_OPERATION(result, a, b) \
    __asm__ __volatile__ ( \
        "mov %1, %%eax;\n\t" \
        "add %2, %%eax;\n\t" \
        "imul $42, %%eax;\n\t" \
        "mov %%eax, %0;\n\t" \
        : "=r" (result) \
        : "r" (a), "r" (b) \
        : "%eax" \
    )

typedef struct {
    int start;
    int end;
    int *array;
    long result;
} ThreadData;

void *thread_function(void *arg) {
    ThreadData *data = (ThreadData *)arg;
    data->result = 0;
    
    for (int i = data->start; i < data->end; ++i) {
        int temp_result;
        COMPLEX_OPERATION(temp_result, data->array[i], i);
        data->result += temp_result;
    }
    
    pthread_exit(NULL);
}

int main() {
    int array[ARRAY_SIZE];
    pthread_t threads[NUM_THREADS];
    ThreadData thread_data[NUM_THREADS];
    
    // Initialize the array with random values
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        array[i] = rand() % 100;
    }

    int chunk_size = ARRAY_SIZE / NUM_THREADS;
    
    // Create threads to process chunks of the array
    for (int i = 0; i < NUM_THREADS; ++i) {
        thread_data[i].start = i * chunk_size;
        thread_data[i].end = (i + 1) * chunk_size;
        thread_data[i].array = array;
        pthread_create(&threads[i], NULL, thread_function, (void *)&thread_data[i]);
    }
    
    // Wait for all threads to finish
    long total_result = 0;
    for (int i = 0; i < NUM_THREADS; ++i) {
        pthread_join(threads[i], NULL);
        total_result += thread_data[i].result;
    }
    
    printf("Total result: %ld\n", total_result);
    
    return 0;
}
