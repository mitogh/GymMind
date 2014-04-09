#include <stdio.h>
#include <iostream>
#define N 3005

using namespace std;

int substraction(int a, int b){
    int r = a - b;
    if(r < 0) r *= -1;
    return r;
}

int main(){
    int n, low, max, first, tmp, flag, t;
    int numbers[N];
    while(scanf("%d ", &n) == 1){
        tmp = 0;
        fill_n(numbers, n, 0);
        first = 0;
        max = N * -1;
        low = N;
        flag = 1;
        for(int i = 1; i <= n; i++){
            scanf("%d ", &tmp);
            if(i > 1){
                t = substraction(first, tmp);
                first = tmp;
                if(t > max) max = t;
                if(t < low) low = t;
                if(numbers[t] == 0){
                    numbers[t] = 1;
                }else{
                    flag = 0;
                }
            }else{
                first = tmp;
            }
        }

        for(; low <= max && flag; low++){
            if(numbers[low] == 0){
                flag = 0;
                break;
            }
        }
        (flag) ? printf("Jolly\n") : printf("Not jolly\n");
    }
    return 0;
}
