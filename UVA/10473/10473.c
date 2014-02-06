#include <stdio.h>

int to_pow(int base, int exp){
    if(!exp) return 1;
    int total = base;
    int i = 1;
    while(i++ < exp) total *= base;
    return total;
}

int main(){
    int i, hex, j;
    int dec, n;
    int result[12];
    char number[12];
    char real[12];
    char hexadecimal[16] = {'0', '1','2','3','4','5','6','7', '8','9','A','B','C','D','E','F'};
    
    while(fgets(number, sizeof(number), stdin) != NULL){
        if(number[0] == '-') break;
        if(number[1] == 'x' || number[1] == 'X') hex = 1;
        else hex = 0;
        i = (hex) ? 2 : 0;
        n = 0, j = 0;
        while(number[i] != '\0') {
            if(number[i] == '\n') break;
            if(hex){
                if(number[i] >= 'a') number[i] -= 32;
                real[j++] = number[i];
            }else{
                n *= 10;
                n += number[i] - '0';
            }
            i++;
        }
        if(hex){
            i = 0;
            dec = 0;
            j--;
            while(j >= 0){
                if(real[i] >= 'A') dec += (real[i] - 'A' + 10) * to_pow(16, j);
                else dec += (real[i] - '0') * to_pow(16,j);
                j--;
                i++;
            }
            printf("%d\n", dec);
        }else{
            i = 11;
            while(n >= 16){
                result[i--] = n % 16;
                n /= 16;
            }
            result[i] = n;
            printf("0x");
            while(i < 12){
                printf("%c", hexadecimal[result[i]]); 
                i++;
            }
            printf("\n");
        }
    }
    return 0;
}
