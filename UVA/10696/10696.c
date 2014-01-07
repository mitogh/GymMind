#include <stdio.h>

int main(){
    while(1){
        int n = 0;
        scanf("%d", &n);
        if(!n){
            break;
        }

        int i; 
        unsigned int f91 = n;
        for(i = 1; i != 0; ){
            if( f91 > 100 ){
                f91 = f91 - 10; 
                i--; 
            }else{
                f91 = f91 + 11; 
                i++;
            }
        }
        printf("f91(%d) = %d\n", n, f91);
    }
    return 0;
}
