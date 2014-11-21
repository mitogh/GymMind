#include <cstdio>
#include <iostream>

#define LIMIT 5
using namespace std;

int give_answer(int* answers);

int main(){
    int n = 0;
    int j, k;
    int answers[LIMIT] = {0, 0, 0, 0, 0}; 
    int answer = 0;

    do{
        scanf("%d\n", &n);
        for(j = 0; j < n; j++){
            scanf("%d %d %d %d %d\n", &answers[0], &answers[1], &answers[2], 
                    &answers[3], &answers[4]);

            for(k = 0; k < LIMIT; k++){
                if(answers[k] <= 127){
                    answers[k] = 0;
                }else{
                    answers[k] = 255;
                }
            }
            answer = give_answer(answers); 
            if(answer != -1){
                printf("%c\n", answer + 65);
            }else{
                printf("*\n");
            }
        }
    }while(n != 0);

    return 0;
}

int give_answer(int* answers){
    int count_zeros = 0;
    int position = 0;

    for(int i = 0; i < LIMIT; i++){
        if(answers[i] == 0){
            if(count_zeros == 0){
                position = i;
            }else{
                return -1;
            }
            count_zeros++;
        }
    }
    return (count_zeros >= 1) ? position : -1;
}
