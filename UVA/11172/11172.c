#include <stdio.h>

int main(){

    int n; 
    for(scanf("%d", &n); n > 0; n--){
        int a, b; 
        scanf("%d %d", &a, &b);

        if( a > b ){
            printf(">\n");
        }else if( a < b ){
            printf("<\n");
        }else{
            printf("=\n");
        }
    }

    return 0; 
}
