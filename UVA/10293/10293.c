#include <stdio.h>

int main(){
    char line[128];
    int words[32] = {0};
    int i, w = 0, f = 0;
    while(fgets(line, sizeof(line), stdin) != NULL){
        if(line[0] == '#'){
            for(i = 1; i < 32; i++){
                if(words[i]){
                    printf("%d %d\n", i, words[i]);
                    words[i] = 0;
                }
            }
            printf("\n");
            w = 0;
            f = 0;
        }else{
            i = 0;
            while(line[i] != '\0'){
                if(line[i] >= 'a' && line[i] <= 'z') w++;
                else if(line[i] >= 'A' && line[i] <= 'Z') w++;
                else if(line[i] == '\'');
                else if(line[i] == '-') f = 1;
                else if(line[i] == '\n'){
                    if(f && line[i - 1] == '-') f = 0;
                    else{
                        words[w]++;
                        f = 0;
                        w = 0;
                    }
                }else{
                    if(f) f = 0;
                    words[w]++;
                    w = 0;
                }
                i++;
            }
        }
    }
    return 0;
}
