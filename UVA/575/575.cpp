#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    string line; 

    while(getline(cin, line)){
        if(line == "0"){
            break;
        }

        int size = line.size();
        long count = 0; 

        int l;
        int i;
        for(i = 0, l = size; i < size; i++, l--){
            int j; 
            switch (line[i]){
                case '0': j = 0; break; 
                case '1': j = 1; break; 
                case '2': j = 2; break;
            }
            if(j){
                long op = pow(2,l) - 1;
                if( j == 2 ){
                    count +=  2 * op;
                }else{
                    count += op;
                }
            }    
        } 
        cout << count << "\n";
    }
    return 0; 
}
