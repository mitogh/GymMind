#include <stdio.h>

int main(){
    int n; 

    for(scanf("%d\n", &n); n > 0; n--){
        int s = 0;
        int d = 0;
        scanf("%d %d\n", &s, &d);

        int a = 0;
        int b = 0;

        a = (s + d) / 2;
        b = (s - d) / 2;

        if( !a || !b ){
            a = ((3 * s) - d) / 2;
            b = (d + s) / 2;
        }

        if( !((a + b) == s) && !( (a - b) == s || ((a -s) * -1) == s) ){
            a = -1;
            b = -1;
        }

        if( a >= 0 && b >= 0 ){
            if( a > b ){
                printf("%d %d\n", a, b);
            }else{
                printf("%d %d\n", b, a);
            }
        }else{
            printf("impossible\n");
        }
    }
    return 0;
}
