#include <stdio.h>
#include <string.h>

void zero(int, int, int, int);
void one(int, int);
void two(int, int);
void tree(int, int);
void four(int, int);
void five(int, int, int, int);
void six(int, int);
void seven(int, int);
void eight(int, int);
void nine(int, int);

int main(){
    int s;
    char numbers[12];
    while(scanf("%d %s", &s, numbers) == 2){
        if(s == 0 && numbers[0] == '0') break;
        int i = 0; 
        int l = strlen(numbers) - 1;
        int rows, columns, r,c; 
        columns = 2 + s; 
        rows = (2 * s) + 3;

        for(r = 0; r < rows; r++){
            for(c = 0; c < columns;  c++){  
                zero(columns, rows, r, c);
            }
            printf("\n");
        }

        memset(numbers,0, sizeof(numbers));
    }
    return 0;
}

void zero(int columns, int rows, int r, int c){
    int half = rows / 2;

            if( r == 0 || r == (rows -1)){
                if( c == 0 || c == (columns -1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }else{
                if(r == half || r == 0 || (r == rows -1)) return;
                if(c == 0 || c == columns - 1) printf("|");
                else printf(" ");
            }

}
void one(int columns, int rows){
    int half = rows / 2;
    int c, r;
    
    for(r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            if( r == half || r == 0 || r == (rows -1)){
                printf(" ");
            }else{
                if( c == columns - 1) printf("|");
                else printf(" ");
            }
        }
    }
}
void two(int columns, int rows){
    int half = rows / 2;
    int c, r;
    
    for(r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            if( r == half || r == 0 || r == (rows -1)){
                if( c == 0 || c == (columns -1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }else{
                if((c == 0  && r >= half) || (c == columns - 1 && r < half) ) printf("|");
                else printf(" ");
            }
        }
    }
}
void tree(int columns, int rows){
    int half = rows / 2;
    int c, r;
    
    for(r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            if( r == half || r == 0 || r == (rows -1)){
                if( c == 0 || c == (columns -1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }else{
                if(c == columns - 1) printf("|");
                else printf(" ");
            }
        }
    }
}
void four(int columns, int rows){
    int half = rows / 2;
    int c, r;
    
    for(r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            if( r == half ){
                if( c == 0 || c == (columns -1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }else{
                if(r == 0 || (r == rows -1)) continue;
                if((c == 0 && r < half) || c == columns - 1) printf("|");
                else printf(" ");
            }
        }
    }
}
void five(int columns, int rows, int c, int r){
    int half = rows / 2;
    

    if( r == half || r == 0 || r == (rows -1)){
        if( c == 0 || c == (columns -1)){
            printf(" ");
        }else{
            printf("-");
        }
    }else{
        if((c == 0 && r <= half) || (r >= half && c == columns - 1) ) {
            printf("|");
        }else{
            printf(" ");
        }
    } 
}

void six(int columns, int rows){
    int half = rows / 2;
    int c, r;
    
    for(r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            if( r == half || r == 0 || r == (rows -1)){
                if( c == 0 || c == (columns -1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }else{
                if(c == 0 || (r >= half && c == columns - 1) ) printf("|");
                else printf(" ");
            }
        }
    }
}

void seven(int columns, int rows){
    int half = rows / 2;
    int c, r;
    
    for(r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            if( r == 0 ){
                if( c == 0 || c == (columns -1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }else{
                if(r == half || (r == rows -1)) continue;
                if(c == columns - 1) printf("|");
                else printf(" ");
            }
        }
    }
}
void eight(int columns, int rows){
    int half = rows / 2;
    int c, r;
    
    for(r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            if( r == half || r == 0 || r == (rows -1)){
                if( c == 0 || c == (columns -1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }else{
                if(c == 0 || c == columns - 1) printf("|");
                else printf(" ");
            }
        }
    }
}

void nine(int columns, int rows){
    int half = rows / 2;
    int c, r;
    
    for(r = 0; r < rows; r++){
        for(c = 0; c < columns; c++){
            if( r == half || r == 0 || r == (rows -1)){
                if( c == 0 || c == (columns -1)){
                    printf(" ");
                }else{
                    printf("-");
                }
            }else{
                if( (r >= half && c == 0) || (c > 0 && c < columns -1)) printf(" ");
                else printf("|");
            }
        }
    }
}