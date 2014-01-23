#include <stdio.h>

int main(){
    short n;

    while(scanf("%hd", &n) == 1 && n){
        short tmp;
        int count[5] = {0};
        int j = 1;
        while(j <= n){
            tmp = j;
            while(tmp > 0){
                if(tmp >= 100){
                    count[4]++;
                    tmp -= 100;
                }else if(tmp >= 90){
                    count[4]++;
                    count[2]++;
                    tmp -= 90;
                }else if(tmp >= 50){
                    count[3]++;
                    tmp -= 50;
                }else if(tmp >= 40){
                    count[3]++;
                    count[2]++;
                    tmp -= 40;
                }else if(tmp >= 10){
                    count[2]++;
                    tmp -= 10;
                }else if(tmp == 9){
                    count[0]++;
                    count[2]++;
                    tmp -= 9;
                }else if(tmp >= 5){
                    count[1]++;
                    tmp -= 5;
                }else if(tmp == 4){
                    count[0]++; 
                    count[1]++;
                    tmp -= 4;
                }else{
                    count[0]++;
                    tmp -= 1;
                }
            }
            j++;
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, count[0], count[1], count[2], count[3], count[4]);
    }
    return 0;   
}
