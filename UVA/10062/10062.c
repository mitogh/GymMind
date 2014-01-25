#include <stdio.h>
#include <string.h>

int main(){
    int c, i = 0, f = 0, max = 1, min = 1;
    int count[97] = {0};

    while((c = getchar()) != EOF){
        if(f) printf("\n");
        if(c >= 32 && c <= 128){
            i = 1;
            f = 0;
            count[c - 32]++;
            if(count[c - 32] > max) max = count[c - 32];
            if(count[c - 32] < min) min = count[c - 32];
        }else{
            if(i && (c == '\n' || c == '\r')){
                for(; min <= max; min++){
                    int h;
                    for(h = 96; h >= 0; h--){
                        if(count[h] == min) printf("%d %d\n", h + 32, count[h]);
                    }
                }
                i = 0;
                f = 1;
                memset(count, 0, sizeof(count));
            }else{
                break;
            }
        }
    }
    return 0;
}
