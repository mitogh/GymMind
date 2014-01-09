#include <stdio.h>
#include <string.h>

int main(){
    int character;
    int count[52] = {0};
    
    while((character = getchar()) != EOF){
        if(character == '\n'){
            short i;
            int large = 0;
            
            for(i = 0; i < 52; i++){
                if(count[i] > large){
                    large = count[i]; 
                }
            }

            for(i = 0; i < 52; i++){
                if( count[i] == large ){
                    printf("%c", (i < 26) ? i + 65 : i + 71);
                }
            }
            printf(" %d\n", large);

            memset(count, 0, sizeof(count));
            continue;
        }
        if( character >= 'A' && character <= 'Z' ){
            count[character-'A'] += 1;
        }
        if( character >= 'a' && character <= 'z' ){
            count[character - 71] += 1;
        }
    }

    
    return 0;
}
