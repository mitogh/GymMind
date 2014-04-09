#include <stdio.h>
#include <iostream>
#include <math.h>
#define N 32769

using namespace std;

void generate(int *n){
    int sqrtValue = sqrt(N);

    for(int i = 2; i <= sqrtValue; i++){
        if(n[i]){
            int j = i * i;
            int h = 1;
            while(j <= N){
                n[j] = 0;
                j = (i * i) + (h * i);
                h++;
            }
        }
    }
}

int main(){
    int primes[N];
    fill_n(primes, N, 1);
    generate(primes);
    int n, count;
    
    while(scanf("%d", &n) && n != 0){
        count = 0;
        for(int i = 2; i < n; i++){
            if(primes[i]){
                for(int j = i; i + j <= n; j++){
                    if(primes[j] && i + j == n){
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
