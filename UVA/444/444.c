#include <stdio.h>
#include <string.h>

int main(){
    char line[1024];
    int i, count, change, flag;
    while(fgets(line, sizeof(line), stdin) != NULL){
        i = strlen(line) - 1;
        count = 0, change = 0, flag = 0;
        while(i >= 0){
            if(line[i] >= '0' && line[i] <= '9'){
                if(!change && line[i] == '1') flag = 1;
                count *= 10;
                count += line[i] - '0';
                ++change;

                if((!flag && change == 2) || (flag && change == 3)){
                    printf("%c", count);
                    count = 0, change = 0, flag = 0;
                }
            }else{
                if(line[i] != '\n'){
                    if(line[i] >= 100){
                        printf("%d", (line[i] - 100) % 10);
                        printf("%d", (line[i] - 100) / 10);
                        printf("%d", line[i] / 100);
                    }else{
                        printf("%d", line[i] % 10);
                        printf("%d", line[i] / 10);
                    }
                }
            }
            i--;
        }
        printf("\n");
    }
    return 0;
}
