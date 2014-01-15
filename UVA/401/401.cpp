#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    string line; 

    while(getline(cin, line)){

        short i = 0;
        short size = 0;
        while(line[i] != '\0'){
            if( line[i] != ' '){
                size++;
            }
            i++;
        } 
        size--;

        short middle = ceil((float)size / 2);
        short mirror = -1;
        short palindrom = -1; 
        i = 0;  
        while( i <= middle ){
            if(line[i] == line[size]){
                palindrom++;
            }
            if( line[i] == 'A' && line[size] == 'A'){
                mirror++;
            }else if( (line[i] == 'E' && line[size] == '3') || (line[i] == '3' && line[size] == 'E')){
                mirror++;
            }else if( line[i] == 'H' && line[size] == 'H' ){
                mirror++;
            }else if( line[i] == 'I' && line[size] == 'I'){
                mirror++;
            }else if( (line[i] == 'J' && line[size] == 'L') || (line[i] == 'L' && line[size] == 'J')){
                mirror++;
            }else if( line[i] == 'M' && line[size] == 'M'){
                mirror++;
            }else if( line[i] == 'O' && line[size] == 'O'){
                mirror++;
            }else if( (line[i] == 'S' && line[size] == '2') || (line[i] == '2' && line[size] == 'S') ){
                mirror++;
            }else if( line[i] == 'T' && line[size] == 'T'){
                mirror++;
            }else if( line[i] == 'U' && line[size] == 'U'){
                mirror++;
            }else if( line[i] == 'V' && line[size] == 'V'){
                mirror++;
            }else if( line[i] == 'W' && line[size] == 'W'){
                mirror++;
            }else if( line[i] == 'X' && line[size] == 'X'){
                mirror++;
            }else if( line[i] == 'Y' && line[size] == 'Y'){
                mirror++;
            }else if( (line[i] == 'Z' && line[size] == '5') || (line[i] == '5' && line[size] == 'Z') ){
                mirror++;
            }else if( line[i] == '1' && line[size] == '1'){
                mirror++;
            }else if( line[i] == '8' && line[size] == '8'){
                mirror++;
            }
            i++;
            size--;
        }
        i = 0; 
        
        while(line[i] != '\0'){
            printf("%c", line[i]);
            i++;
        }

        if( (mirror == middle) && mirror == palindrom ){
            printf(" -- is a mirrored palindrome.\n\n");
        }else if( mirror == middle ){
            printf(" -- is a mirrored string.\n\n");
        }else if(  palindrom == middle ){
            printf(" -- is a regular palindrome.\n\n");
        }else{
            printf(" -- is not a palindrome.\n\n");
        }
    }
    return 0;
}
