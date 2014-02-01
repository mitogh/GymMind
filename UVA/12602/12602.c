#include <stdio.h>
#include <string.h>

int exponentiation(int base, int exponentiation){
    if(!exponentiation) return 1;
    int total = base;
    int i = 1;
    while(i++ < exponentiation) total *= base;
    return total;
}

int main(){
    int n;
    
    for(scanf("%d\n", &n); n > 0; n--){
        char licence[9];
        licence[0] = 0;
        scanf("%s", licence);

        int i;
        int sum;
        int count = 0;
        for(i = 0, sum = 2; i < 3; i++, sum--) count += ((licence[i] - 'A') * exponentiation(26, sum));

        sum = 0;
        for(i = 4; i < 8; i++){
            sum *= 10;
            sum += licence[i] - '0';
        }

        int total = (count - sum < 0) ? sum - count : count - sum; 

        if(total <= 100) printf("nice\n");
        else printf("not nice\n");
    }
}
