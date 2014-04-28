#include <stdio.h>

int main(){
    int i = 1;
    int l = 1000;
    unsigned long long total = 0;
    
    while(i < l){
        if(i % 3 == 0 || i % 5 == 0) total += i;
        i++;
    }
    printf("%llu\n", total);
    return 0;
}
