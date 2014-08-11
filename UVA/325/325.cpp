#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int isBlank(char c){
    return (c == ' ' || c == '\t' || c == '\r' || c == '\n');
}
int isPoint(char c){
    return (c == '.');
}
int isExponent(char c){
    return (c == 'e' || c == 'E');
}
int isOperator(char c){
    return (c == '+' || c == '-');
}
int isNumber(char c){
    return (c >= '0' && c <= '9');
}
int main(){
    string expression;
    while(getline(cin, expression) && expression != "*"){
        int start = 0;
        int i, j;
        for(i = 0, j = expression.size() - 1; i < j; i++){
            if(!isBlank(expression[i])){
                break;
            }
        }

        int invalid = 0;
        int has_decimal_or_point = 0;
        int check_for_fractions = 0;
        int check_for_spaces = 0;
        int recheck = 0;
        for(; i <= j; i++){
            if(isExponent(expression[i])){
                has_decimal_or_point = 1;
                check_for_fractions = 1;
            }else if(isPoint(expression[i])){
                if(i == 0 || 
                    !isNumber(expression[i - 1]) ||
                    !isNumber(expression[i + 1])
                  ){
                    invalid = 1;
                    break;
                }else{
                    recheck = 1;
                }
                has_decimal_or_point = 1;
            }else if(isOperator(expression[i])){
                if(!isNumber(expression[i + 1]) && !isExponent(expression[i + 1])){
                    invalid = 1;
                    break;
                }else{
                    recheck = 1;
                }
            }else if(isNumber(expression[i])){
                recheck = 1;
            }
            if(recheck && isBlank(expression[i])){
                check_for_spaces = 1;
            }
            if(check_for_spaces && (isNumber(expression[i])    ||
                                    isExponent(expression[i]) ||
                                    isOperator(expression[i]) ||
                                    isPoint(expression[i]))
            ){
                    invalid = 1;
                    break;
            }
            if(check_for_fractions && isPoint(expression[i])){
                invalid = 1;
                break;
            }
        }
        if(!has_decimal_or_point){
            invalid = 1;
        }

        if(invalid){
            cout << expression << "is legal.\n";
        }else{
            cout << expression << "is illegal.\n";
        }
        cout << invalid << endl;
    }
    return 0;
}
