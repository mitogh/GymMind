#include <stdio.h>
#include <string.h>
#include <stack>
#include <iostream>

using namespace std;

int main(){
    int n;

    for(scanf("%d\n", &n); n > 0; n--){
        string line;

        stack<char> balance;
        getline(cin, line);

        short i = 0;
        short flag = 0;

        while(line[i] != '\0'){
            if(line[i] == '(' || line[i] == '['){
                balance.push(line[i]);
            }else if(line[i] == ')' || line[i] == ']'){
                if(!balance.empty()){
                    char top = balance.top();
                    if( (top == '[' && line[i] == ']') || (top == '(' && line[i] == ')') ){
                        balance.pop();
                    }else{
                        flag = 1;
                        break;
                    }
                }else{
                    flag = 1;
                    break;
                }
            }
            i++;
        }
        if(!flag && balance.empty()){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
