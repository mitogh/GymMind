#include <stdio.h>

int main(){
    unsigned int a,b;

    while(scanf("%d %d", &a, &b) != EOF){
        unsigned int t;
        unsigned int cA = a;
        unsigned int cB = b;
        if(cA > cB){
            t = cB;
            cB = cA;
            cA = t;
        }
        
        int max = 0;
        unsigned int tmp = 0;

        while( cA <= cB ){
            unsigned int n = cA;
            tmp = 1;
            while(n != 1){
                if( n % 2 == 1 ) n = n * 3 + 1;
                else n /= 2;
                tmp++;
            }
            if( tmp > max ){
                max = tmp;
            }
            cA++;
        }
        printf("%d %d %d\n", a, b, max);
    }
    return 0;
}
