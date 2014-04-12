#include <stdio.h>

int main(){
    int c;
    int many = 0;
    while((c = getchar()) != EOF){
        if(c != ' '){
            many = 0;
            printf("%c", c);
        }else{
            if(many == 0) printf(" ");
            ++many;
        }
    }

    return 0;
}
