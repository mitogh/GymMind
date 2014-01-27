#include <stdio.h>
#include <time.h>

int main(){
    unsigned long int i = 0; 
    clock_t start = clock();

    for(; i < 50000; i++) printf("*");

    printf("\nSeconds from the begging of this program: %f", (clock() - start) / (double)CLOCKS_PER_SEC); 
    return 0;
}
