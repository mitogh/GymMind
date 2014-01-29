#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;
int main(){
    // Character to read; 
    string buffer;
    clock_t start = clock();
    
    while(getline(cin, buffer)); 

    printf("Time: %f", (clock() - start) / (double)CLOCKS_PER_SEC);

    return 0;
}
