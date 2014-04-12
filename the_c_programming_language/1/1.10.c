#include <stdio.h>

int main(){
    int c;
    int many = 0;
    while((c = getchar()) != EOF){
        if(c == '\\')   printf("\\\\");
        else if(c == '\t')   printf("\\t");
        else if(c == '\b')   printf("\\b");
        else    printf("%c", c);
    }
    return 0;
}
