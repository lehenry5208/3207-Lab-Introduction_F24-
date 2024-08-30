#include <stdlib.h>  
#include <time.h>    

char randchar() {
    return 'A' + (rand() % 26);  // 'A' + (0-25) = 'A'-'Z'
}
