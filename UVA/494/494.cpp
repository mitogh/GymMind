#include <stdio.h>
#include <iostream>

using namespace std; 

int main(){
    string line; 
    
    while(getline(cin, line)){
        int i, count, flag;
        i = 0;
        count = 0;
        flag = 0;

        while(line[i] != '\0'){
            if((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')){
                flag = 1; 
            }else{
                if(flag){
                    count++; 
                    flag = 0;
                }
            }
            i++; 
        }
        printf("%d\n", count);
    }
    return 0; 
}
