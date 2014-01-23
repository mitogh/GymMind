#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    string line;

    while(getline(cin, line)){
        int i = 0;

        if(line[i] >= '0' && line[i] <= '9'){
            int num = 0;
            while(line[i] != '\0'){
                num *= 10;
                num += line[i] - 48;
                i++;
            }

            while(num > 0){
                if(num >= 1000){
                    printf("M");
                    num -= 1000;
                }else if(num >= 900){
                    printf("CM");
                    num -= 900;
                }else if(num >= 500){
                    printf("D");
                    num -= 500;
                }else if(num >= 400){
                    printf("CD");
                    num -= 400;
                }else if(num >= 100){
                    printf("C");
                    num -= 100;
                }else if(num >= 90){
                    printf("XC");
                    num -= 90;
                }else if(num >= 50){
                    printf("L");
                    num -= 50;
                }else if(num >= 40){
                    printf("XL");
                    num -= 40;
                }else if(num >= 10){
                    printf("X");
                    num -= 10;
                }else if(num == 9){
                    printf("IX");
                    num -= 9;
                }else if(num >= 5){
                    printf("V");
                    num -= 5;
                }else if(num == 4){
                    printf("IV");
                    num -= 4;
                }else{
                    printf("I");
                    num -= 1;
                }
            }
        }else{
            int total = 0;
            while(line[i] != '\0'){
                int n = 0;
                switch(line[i]){
                    case 'M':   n = 1000;   break;
                    case 'D':   n = 500;    break;
                    case 'C':   n = 100;    break;
                    case 'L':   n = 50;     break;
                    case 'X':   n = 10;     break;
                    case 'V':   n = 5;      break;
                    case 'I':   n = 1;      break;
                }
                total += n;

                if( i > 0){
                    if((line[i -1] == 'C' && line[i] == 'D') || (line[i -1] == 'C' && line[i] == 'M'))  total -= 200;
                    if((line[i -1] == 'X' && line[i] == 'C') || (line[i -1] == 'X' && line[i] == 'L'))  total -= 20;
                    if((line[i -1] == 'I' && line[i] == 'X') || (line[i -1] == 'I' && line[i] == 'V'))  total -= 2;
                }
                i++;
            }
            printf("%d", total);
        }
        printf("\n");
    }
    return 0;
}
