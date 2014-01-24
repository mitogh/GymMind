#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    int round;
    
    while(scanf("%d\n", &round) == 1 && round != -1){
        string guess, line;
        string unique;

        getline(cin, line);
        getline(cin, guess);

        int i = 0;
        int mistakes = 0;
        int correct = 0;
        int l = line.size();

        int k = 0;
        while(guess[i] != '\0'){
            int j = 0;
            short flag = 0;
            while(j < k){
                if(unique[j] == guess[i]){
                    flag = 1;
                }
                j++;
            }
            if(!k || !flag){
                unique += guess[i];
            }
            k++;
            i++;
        }
        unique += '\0';

        i = 0;
        printf("Round %d\n", round);
        while(unique[i] != '\0'){
            int j = 0;
            int f = 0;
            while(line[j] != '\0'){
                if(line[j] == unique[i]){
                    line[j] = '*';
                    correct++;
                    f = 1;
                }
                j++;
            }
            if(correct == l)    break;
            if(f)               f = 0;
            else                mistakes++;
            if(mistakes == 7)   break;

            i++;
        }
        if(correct == l)        printf("You win.\n");
        else if(mistakes == 7)  printf("You lose.\n");
        else                    printf("You chickened out.\n");
    }
    return 0;
}
