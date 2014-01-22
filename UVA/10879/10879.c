#include <stdio.h>

int main(){
    int n = 0;
    int i = 1;
    
    for(scanf("%d\n", &n); i <= n; i++){
        int num; 
        scanf("%d", &num);

        printf("Case #%d: %d", i,num);

        int j = 2;
        while(num % j != 0 ){
            if(j > num) break;
            else j++;
        }
        int tmp = j;
        if(tmp < num) printf(" = %d * %d", tmp, num / tmp);

        j++; 
        while(num % j != 0 ){
            if(j > num) break;
            else j++;
        }
        
        if(j < num && j != tmp && num / j != tmp) printf(" = %d * %d", j, num / j);

        printf("\n");
    }

    return 0;
}
