#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std; 

int main(){
    string line; 

    while(getline(cin, line)){
        if(line == "DONE"){
            break;
        }
        string nuevo; 
        int i = 0; 
        while(line[i] != '\0'){
            if(line[i] >= 'A' && line[i] <= 'Z'){
                line[i] = line[i] + 32; 
            }
            
            if( (line[i] >= 'a' && line[i] <= 'z')){
                nuevo += line[i];
            }
            i++; 
        }
        i = 0; 
        int tempLen = nuevo.size() - 1;
        int len = tempLen/ 2; 
        int bandera = 0; 

        for(; i <= len; i++, tempLen--){
           if(nuevo[i] != nuevo[tempLen]){
               bandera = 1;
               break;
           }
        }
        
        if(bandera){
            printf("Uh oh..\n");
        }else{
            printf("You won't be eaten!\n");
        }

    }
   
    return 0; 
}
