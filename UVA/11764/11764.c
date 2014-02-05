#include <stdio.h>

int main(){
    int t = 0, walls = 0, j = 0, i = 1,  last;
    int max = 0, min = 0;

    for(scanf("%d", &t); i <= t; i++){
        max = 0; 
        min = 0;
        last = -1;
        for(scanf("%d", &walls); walls > 0; walls--){
            scanf("%d", &j);
            if(last >= 0){
                if(last > j) min++;
                if(last < j) max++;
            }
            last = j;
        }
        printf("Case %d: %d %d\n", i, max, min);
    }
    return 0; 
}
