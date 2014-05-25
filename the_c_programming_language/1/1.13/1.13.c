#include <stdio.h>

int main(){
    int c = '\0';
    int word = 0;
    int count = 0;
    while( (c = getchar()) != EOF){
        if( (c == '\n' && word) || (c == ' ' && word)){
            count++;
            word = 0;
        }
        // Part of the word just letters
        if( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ){
            word = 1;
        }
    }

    int j = 0;
    for(j = count; j > 0; j--){
        printf("[=]");
    }
    printf(" %d words\n", count);
    return 0;
}
