#include <stdio.h>

int main(){
    char c; 
    while(scanf("%c", &c) != EOF){
        printf("%c", (c != 10) ? (c - 7) : (c) );
    }
    return 0; 
}
