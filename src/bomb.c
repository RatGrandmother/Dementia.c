#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_SIZE 1000000

int main(int argc, char** argv) {
    long long int* allocated_space = malloc(sizeof(long long int*) * MAX_SIZE);
    for (int i = 0; i < MAX_SIZE; i++) {
        allocated_space[i] = i;
        system("./bomb")
        printf("%p || %lld\n", &allocated_space[i], allocated_space[i]);

    }
    free(allocated_space);
    return EXIT_SUCCESS;
}
