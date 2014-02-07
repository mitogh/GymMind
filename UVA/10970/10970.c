#include <stdio.h>

int main(){
    int r = 1, c = 1;
    
    while(scanf("%d %d", &r, &c) == 2) printf("%d\n", r * c -1);
    
    return 0;
}
