#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int valid(char c){
    return ( (c >= '0' && c <= '9') || c == 'e' || c == 'E' || c == '+' || c == '-');
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

int valid(string expression){
    int i = start(expression);
    int j = end(expression);
    int dot_flag = 0;
    int dot_pos = -1, e_pos;
    int valid = 1;

    while(i <= j){
        cout << expression[i];
        switch(expression[i]){
            case ' ':
                return 0;
                break;

            case '.':
                dot_flag = 1;
                dot_pos = i;
                break;
            case 'E':
            case 'e':
                dot_flag = 1;
                e_pos = i;
                break;
        }
        i++;
    }
    cout << "====> ";
    if(!dot_flag){
        return 0;
    }
    
    if(dot_pos > 0){
        if(!(
                (expression[dot_pos - 1] >= '0' && expression[dot_pos - 1] <= '9') && 
                (expression[dot_pos + 1] >= '0' && expression[dot_pos + 1] <= '9')
            )
        ){
            return 0;
        }
    }
    if(e_pos > 0){
        if(!(expression[e_pos - 1] >= '0' && expression[e_pos - 1] <= '9')){
            return 0;
        }
    }

    return 1;
}

int main(){
    string expression;
    while(getline(cin, expression)){
        if(expression == "*") break;
        cout << valid(expression) << endl;
    }
    return 0;
}
