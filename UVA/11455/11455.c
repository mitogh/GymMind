#include <stdio.h>

int main(){
    int n, done, i, tmp, l;
    int numbers[5] = {0};
    for(scanf("%d", &n); n > 0; n--){
        scanf("%d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);
        done = 0; 
        l = 3;
        while(!done){
            done = 1;
            for(i = 0; i < l; i++){
                if(numbers[i] > numbers[i+1]){
                    tmp = numbers[i]; 
                    numbers[i] = numbers[i+1];
                    numbers[i+1] = tmp;
                    done = 0;
                }
            }
            l--;
        }

        if(numbers[0] == numbers[1] && numbers[1] == numbers[2] && numbers[2] == numbers[3]) printf("square\n");
        else if(numbers[0] == numbers[1] && numbers[2] == numbers[3]) printf("rectangle\n");
        else if(numbers[0] + numbers[1] + numbers[2] > numbers[3]) printf("quadrangle\n");
        else printf("banana\n");
    }
    return 0;
}
