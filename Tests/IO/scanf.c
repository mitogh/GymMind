#include <stdio.h>
#include <time.h>

int main(){
    // Character to read; 
    char buffer[1024];
    clock_t start = clock();
    
    while(scanf("%s", buffer) == 1); 

    printf("Time: %f", (clock() - start) / (double)CLOCKS_PER_SEC);

    return 0;
}
