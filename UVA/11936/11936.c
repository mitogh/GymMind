#include <stdio.h>

int main(){
    short n; 
    
    for(scanf("%hd", &n); n > 0; n--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
    
        if((a + b) > c && (a + c) > b && (b + c) > a ){
            printf("OK\n");
        }else{
            printf("Wrong!!\n");
        }
    }
    return 0;
}
