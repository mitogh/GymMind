#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    const char letter[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string line;
    int count[25] = {0}; 
    int n, i;
    int max = 0;

    for(scanf("%d\n", &n); n > 0; n--){
        getline(cin, line);

        i = 0;
        while(line[i] != '\0'){
            if(line[i] >= 'A' && line[i] <= 'Z'){ 
                count[line[i] - 65] += 1;
                if( count[line[i] - 65] > max ){
                    max = count[line[i] - 65];
                }
            }else if( line[i] >= 'a' && line[i] <= 'z'){
                count[line[i] - 97] += 1;
                if( count[line[i] -97] > max ){
                    max = count[line[i] - 97];
                }
            }
            i++;
        }
    }
    
    for(i = max; i >= 1; i--){
        for(n = 0; n <= 25; n++){
            if(count[n] == i){
                printf("%c %d\n", letter[n], i);
            }
        }
    }

    return 0;
}
