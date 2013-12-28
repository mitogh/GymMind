#include <stdio.h>

int main(){
    short n; 
    short c; 
    for(scanf("%hd", &n), c = 1; n > 0; n--, c++){
        int biggest = -1; 
        int total;  
        for(scanf("%d", &total); total > 0; total --){
            int temp; 
            scanf("%d", &temp); 
            biggest = (temp > biggest) ? temp : biggest; 
        }
        printf("Case %d: %d\n", c, biggest);
    }

    return 0; 
}
