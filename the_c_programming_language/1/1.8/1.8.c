#include <stdio.h>

int main(){
    int count = 0;
    int c;
    while( (c = getchar()) != EOF ){
        if(c == ' ' || c == '\n' || c == '\t' ) ++count;
    }
    printf("Total of blanks, new line and tabs: %d", count);

    return 0;
}
