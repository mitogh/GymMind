#include <stdio.h>

int main(){
    int num = 0;

    while(scanf("%d", &num) == 1){
        int count = 0;

        while(num > 0){
            if(num >= 1000){
                count += 4;
                num -= 1000;
            }else if(num >= 900){
                count += 6;
                num -= 900;
            }else if(num >= 500){
                count += 3;
                num -= 500;
            }else if(num >= 400){
                count += 5;
                num -= 400;
            }else if(num >= 100){
                count += 2;
                num -= 100;
            }else if(num >= 90){
                count += 4;
                num -= 90;
            }else if(num >= 50){
                count += 2;
                num -= 50;
            }else if(num >= 40){
                count += 4;
                num -= 40;
            }else if(num >= 10){
                count += 2;
                num -= 10;
            }else if(num == 9){
                count += 3;
                num -= 9;
            }else if(num >= 5){
                count += 2;
                num -= 5;
            }else if(num == 4){
                count += 3;
                num -= 4;
            }else{
                count += 1;
                num -= 1;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
