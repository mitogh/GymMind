#include <stdio.h>
#include <iostream>
#include <string>

using namespace std; 

int main(){
    
    string line; 

    while(getline(cin, line)){

        int i = line.size() - 1;
        char decode[81];
        int j, k, n; 
        j = 0; 
        k = 0; 
        n = 0;

        if(line[0] >= '0' && line[0] <= '9'){
            while(i >= 0){
                decode[j++] = line[i--];
            }
            decode[j] = '\0';

            j = 0;
            while(decode[j] != '\0'){
                n = 0;
                if(decode[j] == '1'){
                    n = 100;
                    j++;
                }

                n += (decode[j] - 48) * 10;
                n += decode[j+1] - 48;
                j += 2;
                
                printf("%c", n);
            }
        }else{
            while(line[j] != '\0'){
                if(line[j] >= 100){
                    decode[k++] = (line[j] / 100) + 48; 
                    decode[k++] = ((line[j] - 100) / 10) + 48;
                    decode[k++] = (line[j] % 10) + 48;
                }else{
                    decode[k++] = (line[j] / 10) + 48;
                    decode[k++] = (line[j] % 10) + 48;
                }
                j++;
            }
            decode[k--] = '\0';

            while( k >= 0 ){
                printf("%c", decode[k--]);
            }
        }
        printf("\n");
    }

    return 0;
}
