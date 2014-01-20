#include <stdio.h>

int gcd(int a, int b){
    while( b != 0 ){
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

int main(){
    int n;

    while((scanf("%d", &n)) && n > 0){
        unsigned long g = 0;
        int i;
        int j;

        for( i = 1; i < n; i++){
            for(j = i + 1; j <= n; j++){
                g += gcd(i, j);
            }
        }
        printf("%lu\n", g);
    }
    return 0;
}
