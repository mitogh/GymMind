#include <stdio.h>
#include <string.h>

int main(){
    int i = 0, f = 1, max = 0;
    int count[98] = {0};
    char line[1010];

    while(fgets(line, sizeof(line), stdin) != NULL){
        i = 0;
        while(line[i] != '\0'){
            if(line[i] >= 32 && line[i] <= 127){
                count[(int)line[i] - 32]++;
                if(count[(int)line[i] - 32] > max) max = count[(int)line[i] - 32];
                if(count[(int)line[i] - 32] > max) max = count[(int)line[i] - 32];
            }
            i++;
        }

        if(f) f = 0; 
        else printf("\n");

        for(i = 1; i <= max; i++){
            int h;
            for(h = 96; h >= 0; h--){
                if(count[h] == i) printf("%d %d\n", h + 32, count[h]);
            }
        }
        memset(count, 0, sizeof(count));
    }
    return 0;
}
