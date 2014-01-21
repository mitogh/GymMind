#include <stdio.h>
#include <string.h>

void zero(int columns, int rows, int r, int half){
    int c; 
    for(c = 0; c < columns; c++){
        if( r == 0 || r == (rows -1)){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if(r == half || (c > 0 && c < columns -1) ) printf(" ");
            else printf("|");
        }
    }
}
void one(int columns, int rows, int r, int half){
    int c;
    for(c = 0; c < columns; c++){
        if( r == half || r == 0 || r == (rows -1)){
            printf(" ");
        }else{
            if( c == columns - 1) printf("|");
            else printf(" ");
        }
    }
}
void two(int columns, int rows, int r, int half){
    int c;
    for(c = 0; c < columns; c++){
        if( r == half || r == 0 || r == (rows -1)){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if((c == 0  && r >= half) || (c == columns - 1 && r < half) ) printf("|");
            else printf(" ");
        }
    }
}
void three(int columns, int rows, int r, int half){
    int c; 
    for(c = 0; c < columns; c++){
        if( r == half || r == 0 || r == (rows -1)){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if(c == columns - 1) printf("|");
            else printf(" ");
        }
    }
}
void four(int columns, int rows, int r, int half){
    int c;
    for(c = 0; c < columns; c++){
        if( r == half ){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if( r > 0 && ((c == 0 && r < half) || (c == columns -1 && r < rows -1))) printf("|");
            else printf(" ");
        }
    }
}
void five(int columns, int rows, int r, int half){
    int c;
    for(c = 0; c < columns; c++){
        if( r == half || r == 0 || r == (rows -1)){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if((c == 0 && r <= half) || (r >= half && c == columns - 1) ) printf("|");
            else printf(" ");
        } 
    }
}
void six(int columns, int rows, int r, int half){
    int c;
    for(c = 0; c < columns; c++){
        if( r == half || r == 0 || r == (rows -1)){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if(c == 0 || (r >= half && c == columns - 1) ) printf("|");
            else printf(" ");
        }
    }
}
void seven(int columns, int rows, int r, int half){
    int c; 
    for(c = 0; c < columns; c++){
        if( r == 0 ){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if(c == columns - 1 && r != half && r != rows - 1) printf("|");
            else printf(" ");
        }
    }
}
void eight(int columns, int rows, int r, int half){
    int c;
    for(c = 0; c < columns; c++){
        if( r == half || r == 0 || r == (rows -1)){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if(c == 0 || c == columns - 1) printf("|");
            else printf(" ");
        }
    }
}
void nine(int columns, int rows, int r, int half){
    int c;
    for(c = 0; c < columns; c++){
        if( r == half || r == 0 || r == (rows -1)){
            if( c == 0 || c == (columns -1)) printf(" ");
            else printf("-");
        }else{
            if( (r >= half && c == 0) || (c > 0 && c < columns -1)) printf(" ");
            else printf("|");
        }
    }
}
int main(){
    short s;
    char numbers[12];
    while(scanf("%hd %s", &s, numbers) == 2){
        if(s == 0 && numbers[0] == '0') break;

        unsigned short i = 0; 
        unsigned short l = strlen(numbers);
        unsigned short rows, columns,r,c, half, total_columns; 

        columns = 2 + s; 
        rows = (2 * s) + 3;
        half = rows / 2;

        for(r = 0; r < rows; r++){
            i = 0;
            while(numbers[i] != '\0'){
                switch(numbers[i]){
                    case '0':   zero(columns, rows, r, half);   break;
                    case '1':   one(columns, rows, r, half);    break;
                    case '2':   two(columns, rows, r, half);    break;
                    case '3':   three(columns, rows, r, half);  break;
                    case '4':   four(columns, rows, r, half);   break;
                    case '5':   five(columns, rows, r, half);   break;
                    case '6':   six(columns, rows, r, half);    break;
                    case '7':   seven(columns, rows, r, half);  break;
                    case '8':   eight(columns, rows, r, half);  break;
                    case '9':   nine(columns, rows, r, half);   break;
                }
                if( i < (l - 1) ) printf(" ");
                i++;
            }
            printf("\n");
        }
        printf("\n");
        memset(numbers,0, sizeof(numbers));
    }
    return 0;
}
