#include <cstdio>
#include <iostream>

using namespace std;

int is_margarita(char c);
int how_many(int* counter_margarita);

int main(){
    int n = 0;
    scanf("%d\n", &n);
    string line;

    int margarita[6] = {0, 0, 0, 0, 0, 0};
    int i, j;

    while(n > 0){
        getline(cin, line);
        for(i = 0, j = line.size(); i < j; i++){
            if(is_margarita(line[i]) != -1){
                margarita[is_margarita(line[i])]++;
            }
        }

        printf("%d\n", how_many(margarita));
        for(i = 0; i < 6; i++){
            margarita[i] = 0;
        }
        n--;
    }

    return 0;
}

int is_margarita(char c){
    if(c == 'M'){
        return 0;
    }else if(c == 'A'){
        return 1;
    }else if(c == 'R'){
        return 2;
    }else if(c == 'G'){
        return 3;
    }else if(c == 'I'){
        return 4;
    }else if(c == 'T'){
        return 5;
    }else{
        return -1;
    }
}

int how_many(int* counter_margarita){
    counter_margarita[1] = counter_margarita[1] / 3;
    counter_margarita[2] = counter_margarita[2] / 2;
    
    int lower = counter_margarita[0];
    for(int i = 1; i < 6; i++){
        if(counter_margarita[i] < lower){
            lower = counter_margarita[i];
        }
    }
    for(int i = 1; i < 6; i++){
        if(counter_margarita[i] < lower){
            return 0;
        }
    }
    return lower;
}
