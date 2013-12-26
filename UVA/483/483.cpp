#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;

int main(){
    char c; 
    stack<char> words;

    while( (c = getchar()) && c != EOF){
        if( c == ' ' || c == '\n'){
            while(words.size()){
                printf("%c", words.top());
                words.pop();
            }
            printf("%c", c);
        }else{
            words.push(c);
        }
    }

    return 0; 
}
