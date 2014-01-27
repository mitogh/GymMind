#include <stdio.h>
#include <time.h>

int main(){
    // Just for count
    unsigned long int i = 0; 
    // start time
    clock_t start = clock();

    // Simple loop
    for(; i < 50000; i++) printf("*");

    // (clock() - start) give us the amount of time
    // / divided by the CLOCKS_PER_SECOND
    printf("\nSeconds from the begging of this program: %f", (clock() - start) / (double)CLOCKS_PER_SEC); 
    return 0;
}
