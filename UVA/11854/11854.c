#include <stdio.h>

int main(){
    unsigned int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) == 3 ){
        if(a == 0 && b == 0 && c == 0) break;
        short flag = 0;
        if((c > a && c > b) && ((a * a) + (b * b) == (c * c) )){
                flag = 1;
        }else if((b > a && b > c) && ( ((a * a) + (c * c)) == (b * b) )){
                flag = 1;
        }else if((a > c && a > b) && ( ((c * c) + (b * b)) == (a * a) )){
                flag = 1;
        }else if( ((a * a) +(b * b)) == (c * c) ){
                flag = 1;
        }
        (flag) ? printf("right\n") : printf("wrong\n");
    }
}
