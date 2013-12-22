#include <stdio.h>

int main(){
    char c; 
    short flag = 0;
    while(scanf("%c", &c) != EOF){

        if(c == 34){
            if(flag == 0){
                printf("``");
                flag = 1;
            }else{
                printf("''");
                flag = 0; 
            }
        }else{
            printf("%c", c);
        }
    }
    
    return 0; 
}
