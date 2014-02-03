#include <stdio.h>

int main(){
    int t;
    int donation = 0;
    for(scanf("%d", &t); t > 0; t--){
        char action[7];
        int actual = 0;
        scanf("%s %d", action, &actual);
        donation += actual;

        if(action[0] == 'r' && action[5] == 't') printf("%d\n", donation);
    }
    return 0;
}
