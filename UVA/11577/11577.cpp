#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n = 0; 
    
    for(scanf("%d\n", &n); n > 0; n--){
        string line;
        int count[26] = {0};
        
        getline(cin, line); 
        
        int i = 0; 
        while(line[i] != '\0'){
            int index = -1;
            if(line[i] >= 'A' && line[i] <= 'Z'){
                line[i] = line[i] + 32;
            }
            if(line[i] >= 'a' && line[i] <= 'z'){
                index = line[i] - 97;
            }
            if(index >= 0){
                count[index] += 1;
            }
            i++;
        }
        
        int mayor = 0;
        for(i = 0; i < 26; i++){
            if(count[i] > mayor){
                mayor = count[i];
            }
        }
        for(i = 0; i < 26; i++){
            if(count[i] == mayor){
                printf("%c", (i + 97));
            }
        }
        printf("\n");
    }
    return 0;
}
