#include <stdio.h>

int main(){
    char string[133];
    int c = 0;

    while(fgets(string, sizeof(string), stdin) != NULL){
        int r = 0;
        int i = 0;
        while(string[i] != '\0'){
            if(string[i] >= '0' && string[i] <= '9') r += string[i] - '0';
            else if(string[i] == ' ') printf(" ");
            else{
                while(r > 0){
                    if(string[i] == 'b') printf(" ");
                    else printf("%c", string[i]);
                    r--;
                }
            }
            if(string[i] == '!') printf("\n");
            i++;
        }
        printf("\n");
    }
    return 0;
}
