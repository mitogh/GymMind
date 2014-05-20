#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int valid(char c){
    return ( (c >= '0' && c <= '9') || c == 'e' || c == 'E' || c == '+' || c == '-' || c == '.');
}

int start(string expression){
    int len = expression.size();
    int i = 0;

    while(i < len){
        if(valid(expression[i])){
            return i;
        }
        i++;
    }
    return -1;
}
int end(string expression){
    int len = expression.size() - 1;
    while(len >= 0){
        if(valid(expression[len])){
            return len;
        }
        len--;
    }
    return -1;
}
int is_digit(char c){
    return (c >= '0' && c <= '9');
}
int contains_e_or_dot(string expression){
    int i, j;
    for(i = start(expression), j = end(expression); i <= j; i++){
        if(expression[i] == '.' || expression[i] == 'e' || expression[i] == 'E'){
            return 1;
        }
    }
    return 0;
}
int check(string expression){
    int i, j;
    for(i = start(expression), j = end(expression); i <= j; i++){
        if(expression[i] == ' '){
            return 0;
        }else if(expression[i] == '.' || expression[i] == 'e' || expression[i] == 'E'){
            if(i == 0){
                return 0;
            }else if(!is_digit(expression[i - 1])){
                return 0;
            }else if(i + 1 > j){
                return 0;
            }else if(expression[i] == '.' && !is_digit(expression[i + 1])){
                return 0;
            }else if(!(is_digit(expression[i + 1]) || expression[i + 1] == '-' || expression[i + 1] == '+') ){
                return 0;
            }
        }
    }
    return 1;
}
int valid_dot(string expression){
    int i, j;
    int flag = 0;
    for(i = start(expression), j = end(expression); i <= j; i++){
        if(!flag && (expression[i] == 'e' || expression[i] == 'E')) flag = 1;
        if(flag && expression[i] == '.'){
            return 0;
        }
    }
    return 1;
}
int valid(string expression){
    if( contains_e_or_dot(expression)   &&
        valid_dot(expression)           &&
        check(expression)
            ){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    string expression;
    while(getline(cin, expression)){
        if(expression == "*") break;
        int i, j;
        for(i = start(expression), j = end(expression); i <= j; i++){
            printf("%c", expression[i]);
        }
        if(valid(expression)){
            cout << " is legal." << endl;
        }else{
            cout << " is illegal." << endl;
        }
    }
    return 0;
}
