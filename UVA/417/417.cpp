#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int length(string line){
    int i = 0, count = 0;
    while(line[i++] != '\0')  count++;
    return count;
}
int valid(string line){
    int i = length(line), j = 0, valid = 1;
    char prev;
    while(j < i){
        if(j > 0){
            if(prev >= line[j]){
                valid = 0;
                break;
            }else{
                prev = line[j];
            }
        }else{
            prev = line[j];
        }
        j++;
    }
    return valid;
}

int main(){
    string line;
    map<string, int>values;
    char number[6] = "a";
    
    int j = 0;
    int r = 0;
    int l = 'a';
    
    int t = 0;
    for(int i = 0; i < 52; i++){
        number[r] = l + j;
        cout << number << endl;
        if(number[r] == 'z'){
            l++;
            j = 0;
        }else{
            j++;
        }
    }
    return 0;
}
