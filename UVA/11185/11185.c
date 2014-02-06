#include <stdio.h>
#define N 22

int main(){
    int n, i;
    int stack[N];
    while(scanf("%d", &n) && n >= 0){
        i = N - 1;
        while(n >= 3){
            stack[i--] = n % 3;
            n /= 3;
        }
        stack[i] = n;
        while(i < N) printf("%d", stack[i++]);

        printf("\n");
    }
    return 0;
}
