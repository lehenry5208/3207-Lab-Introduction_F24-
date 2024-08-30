#include <stdlib.h>  
#include <time.h>    

char randchar() {
    return 'A' + (rand() % 26);  // 'A' + (0-25) = 'A'-'Z'
}

// Function to fill a string with random characters
void rand_string(char *s, size_t size) {
    for (size_t i = 0; i < size; i++) {
        s[i] = randchar();  // Fill the string with random characters
    }
    s[size] = '\0';  // Null-terminate the string
}
