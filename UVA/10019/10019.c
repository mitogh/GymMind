#include <stdio.h>

int main(){
    int n, m, x, b1, b2, tmp;
    int hexadecimal[10] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2};
    for(scanf("%d\n", &n); n > 0; n--){
        scanf("%d", &m);
        x = m;
        b1 = 0;
        while(x > 0){
            if(x % 2) b1++;
            x /= 2;
        }
        b2 = 0;
        tmp = 0;
        if(m < 10000){
            tmp = m / 1000;
            b2 += hexadecimal[tmp];
            m -= 1000 * tmp;
        }
        if(m < 1000){
            tmp = m / 100;
            b2 += hexadecimal[tmp];
            m -= 100 * tmp;
        }
        if(m < 100){
            tmp = m / 10;
            b2 += hexadecimal[tmp];
            m -= 10 * tmp;
        }
        if(m < 10) b2 += hexadecimal[m];
       
        printf("%d %d\n", b1, b2);
    }
    return 0;
}
