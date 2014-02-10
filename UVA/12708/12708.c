#include <stdio.h>

int main(){
    int n = 0;
    unsigned long x;

    for(scanf("%d", &n); n > 0; n--){
        scanf("%lu", &x);
        if(x % 2 != 0) x--;
        printf("%lu\n", x / 2);
    }
    
    return 0;
}
