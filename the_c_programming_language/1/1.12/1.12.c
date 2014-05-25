#include <stdio.h>

int main(){
    int c;
    int word = 0;
    while( (c = getchar()) != EOF){
        if( (c == '\n' && word) ||
            (c == ' ' && word)){
            printf("\n");
            word = 0;
        }
        
        // Part of the word just letters
        if( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ){
            printf("%c", c);
            word = 1;
        }
    }
    return 0;
}
