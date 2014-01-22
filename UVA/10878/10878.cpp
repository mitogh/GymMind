#include <stdio.h>
#include <iostream>

int exponentiation2(int exp){
    if(!exp) return 1;
    int total = 2;
    int i = 1;
    while(i++ < exp) total *= 2;

    return total;
}

using namespace std;
int main(){
    string line;

    while(getline(cin, line)){
        short i = 1;
        if(line[i] == '_') continue;
        i = 2;
        short j = 6;
        short total = 0;
        while(i < 10){
            if(line[i] == 'o')      total += exponentiation2(j--); 
            else if(line[i] == ' ') j--;
            
            i++;
        }
        printf("%c", total);
    }

    return 0;
}
