#include <stdio.h>

int main(){
    double year;
    int flag = 0, leap = 0, c = 0;

    while(scanf("%lf", &year) == 1){
        if(c) printf("\n");
        leap = 0;
        if(year % 4.0 == 0 && (year % 100 != 0 || year % 400 == 0)){
            printf("This is leap year.\n");
            flag = 1;
            leap = 1;
        }

        if(year % 15 == 0){
            printf("This is huluculu festival year.\n");
            flag = 1;
        }

        if(leap && year % 55 == 0){
            printf("This is bulukulu festival year.\n");
            flag = 1;
        }

        if(!flag){
            printf("This is an ordinary year.\n");
        }else{
            flag = 0;
        } 
        c++;
    }
    return 0;
}
