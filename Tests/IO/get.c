#include <stdio.h>
#include <time.h>

int main(){
    // Character to read; 
    int c;
    clock_t start = clock();
    
    while((c = getc(stdin)) != EOF);

    printf("Time: %f", (clock() - start) / (double)CLOCKS_PER_SEC);

    return 0;
}
