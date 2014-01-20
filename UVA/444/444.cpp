#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
    string line;

    while(getline(cin, line)){
        int length = 0;
        char decode[82];
        int j, f;
        length = line.size() - 1;

        if(line[0] >= '0' && line[0] <= '9'){
            j = 0;
            int b = 10;
            int n = 0;
            f = 0;

            while(length >= 0){
                decode[j] = line[length];
                j++;
                length--;
            }
            decode[j] = '\0';
            
            j = 0;
            while(decode[j] != '\0'){
                if(!n && decode[j] == '1'){
                    n = 100;
                }else{
                    n += (decode[j] - 48) * b;
                    b = (b == 10) ? 1 : 10;
                    f++;
                }
                if(f >= 2){
                    printf("%c", n);
                    f = 0; 
                    n = 0;
                }
                j++;
            }
        }else{
            j = 0;
            f = 0;
            while(line[j] != '\0'){
                if(line[j] >= 100){
                    decode[f] = (line[j] / 100) + 48;
                    f++;
                    decode[f] = ((line[j] - 100) / 10) + 48;
                    f++;
                    decode[f] = (line[j] % 10) + 48;
                    f++;
                }else{
                    decode[f] = (line[j] / 10) + 48;
                    f++;
                    decode[f] = (line[j] % 10) + 48;
                    f++;
                }
                j++;
            }
            decode[f] = '\0';
            
            while( f >= 0 ){
                printf("%c", decode[f]);
                f--;
            }
        }
        printf("\n");
        memset(decode, 0, sizeof(decode));
    }
    return 0;
}
