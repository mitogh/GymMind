#include <stdio.h>

int main(){
    int n, i; 
    for(scanf("%d\n", &n), i = 1; n > 0; n--, i++){
        int cD, cM, cY; 
        scanf("%d/%d/%d\n", &cD, &cM, &cY);

        int bD, bM, bY; 
        scanf("%d/%d/%d\n", &bD, &bM, &bY);

        int total = (cY - bY);
        if(cM < bM) total--;
        if(cM == bM && cD < bD) total--;

        if(total > 130){
            printf("Case #%d: Check birth date\n", i); 
        }else if(total >= 0){
            printf("Case #%d: %d\n", i, total);
        }else{
            printf("Case #%d: Invalid birth date\n", i);
        }
    }
    return 0;
}
