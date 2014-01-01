#include <stdio.h>

int main(){
    int t, i;
    for(i = 1,  scanf("%d", &t); t > 0; t--, i++){
        int a, b;
        scanf("%d\n%d", &a, &b);
        int sum = 0;  
        for(; a <= b; a++){
            if( a % 2 != 0 ){
                sum += a;
            }
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
