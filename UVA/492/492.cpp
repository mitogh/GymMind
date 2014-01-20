#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string line;

    while(getline(cin, line)){
        int final = line.size() - 1;
        int i = 0;
        int first = 0;
        int count = 0;
        int flag = 0;

        while(line[i] != '\0'){
            
            if(line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U' || line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'){
                printf("%c", line[i]);
                count++;
                flag = 1;
            }else if((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')){
                if(count == 0) first = line[i];
                else printf("%c", line[i]);
                
                count++;
                flag = 1;
            }else{
                flag = 0;
            }

            if(flag == 0 || i == final ){
                if(first){
                    printf("%cay", first);
                }else if(count){
                    printf("ay");
                }

                if(!flag) printf("%c", line[i]);
                first = 0;
                count = 0;
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}
