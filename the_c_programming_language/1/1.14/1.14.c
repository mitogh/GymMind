#include <stdio.h>
#define T 256

int main(){
    int c = '\0';
    int word = 0;
    int count[T];
    int i;

    for(i = 0; i < T; i++){
        count[i] = 0;
    }
    
    while( (c = getchar()) != EOF){
        if(c != ' ' && c != '\n' && c != '\t'){
            count[c]++;
        }
    }

    int j;
    for(i = 0; i < T; i++){
        if(count[i] > 0){
            for(j = count[i]; j > 0; j--){
                printf("[=]");
            }
            printf(" %c \n", i);
        }
    }
    return 0;
}
