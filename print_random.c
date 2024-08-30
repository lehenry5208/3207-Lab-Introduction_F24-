//Given Project code
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char* rand_string_alloc(size_t size)
{
    char *s = malloc(size + 1);
    if (s) {
        rand_string(s, size);
    }
    return s;
}

int main(){
    srand(time(NULL)); // Seed the random number generator with the current time

    size_t size = 10; // Length of random string
    char *random_string = rand_string_alloc(size); // Generate random string

    if (random_string) {
        printf("Random string: %s\n", random_string);
    }
    else{
        printf("Memory allocation failed\n");
    }
    free(random_string); // Free the allocated memory
    
    return 0;
}