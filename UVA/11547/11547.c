#include <stdio.h>

int main(){
    int n;

    for(scanf("%d", &n); n > 0; n--){
        int number; 
        scanf("%d", &number);
        number = (((((number * 567) / 9) + 7492) * 235) / 47) - 498; 
        number = (number % 100)  / 10;
        printf("%d\n", (number < 0) ? (number * -1) : number);
    }
    
    return 0; 
}
