#include <stdio.h>

int main(){

    long a, b; 

    while(scanf("%li %li", &a, &b) != EOF){
        printf("%li\n", (a > b) ? (a-b) : (b-a) ); 
    }
    
    return 0;
}
