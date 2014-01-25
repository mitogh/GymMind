#include <stdio.h>

unsigned long isUgly(unsigned long n){
    if(n == 1)      return 0;
    if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0){
        if(n % 2 == 0) n /= 2;
        else if(n % 3 == 0) n /= 3;
        else if(n % 5 == 0) n /= 5;

        return isUgly(n);
    }
    return n;
}
int main() {
    unsigned long i = 0;
    int c = 0;
    for(i = 1; c <= 1500; i++) if(!isUgly(i)) c++; 

    printf("%lu", i);
    return 0;
}
