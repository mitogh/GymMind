#include <stdio.h>

int main(){
    
    int nCases, cases; 
    for( scanf("%d", &nCases), cases = 1; cases <= nCases; cases++){
        int a, b, c; 
        scanf("%d %d %d", &a, &b, &c);

        if( (a > b && b > c) || (c > b && b > a) ){
            printf("Case %d: %d\n", cases, b);
        }else if( (b > a && a > c) || (c > a && a > b) ){
            printf("Case %d: %d\n", cases, a);
        }else{
            printf("Case %d: %d\n", cases, c);
        }
    }
    return 0; 
}
