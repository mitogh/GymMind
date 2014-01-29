#include <stdio.h>
#include <time.h>

int main(){
    // Character to read; 
    char buffer[1024];
    clock_t start = clock();
    
    // NULL is returned when EOF is found
    while(fgets(buffer, sizeof(buffer), stdin) != NULL); 

    printf("Time: %f", (clock() - start) / (double)CLOCKS_PER_SEC);

    return 0;
}
