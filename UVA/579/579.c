#include <stdio.h>

int main(){
    int h, m; 

    while(scanf("%d:%d", &h, &m) == 2){
        if(!h && !m){
            break;
        }

        float total = 0.5 * (60 * h - 11 * m);
        
        if(total < 0){
            total *= --1;
        }
        if(total > 180){
            total = 360 - total;
        }

        printf("%.3f\n", total);
    }
}
