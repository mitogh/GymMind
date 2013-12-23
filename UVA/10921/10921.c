#include <stdio.h>

int main(){
    char c; 
    
    while(scanf("%c", &c) != EOF){
        if( c >= 'A' && c <= 'C'){
            printf("2");
        }else if(c >= 'D' && c <= 'F'){
            printf("3");
        }else if(c >= 'G' && c <= 'I'){
            printf("4");
        }else if(c >= 'J' && c <= 'L'){
            printf("5");
        }else if(c >= 'M' && c <= 'O'){
            printf("6");
        }else if(c >= 'P' && c <= 'S'){
            printf("7");
        }else if(c >= 'T' && c <= 'V'){
            printf("8");
        }else if(c >= 'W' && c <= 'Z'){
            printf("9");
        }else{
            printf("%c", c);
        }
    }
    return 0; 
}
