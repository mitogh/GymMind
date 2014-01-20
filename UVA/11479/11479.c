#include <stdio.h>

int triangle(unsigned long a, unsigned long b, unsigned long c){
    if((a + b) > c && (a + c) > b && (b + c) > a ){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    short n, i;
    for(scanf("%hd", &n), i = 1; i <= n; i++){
        unsigned long a, b,c;

        scanf("%lu %lu %lu", &a, &b, &c);

        printf("Case %hd: ", i);
        if(triangle(a,b,c)){
            if(a == b && b == c){
                printf("Equilateral\n");
            }else if(a != b && a != c && b != c){
                printf("Scalene\n");
            }else{
                printf("Isosceles\n");
            }
        }else{
            printf("Invalid\n");
        }
    }
    return 0;
}
