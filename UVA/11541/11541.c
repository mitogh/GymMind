#include <stdio.h>

int main(){
    short n, i;

    for(scanf("%hd\n", &n), i = 1; i <= n; i++){
        char string[500];
        char final = 0;

        scanf("%s", string);
        short j = 0, k = 0;
        int num = 0;
        printf("Case %hd: ", i);
        while(string[j] != '\0'){
            if(string[j] >= 'A' && string[j] <= 'Z'){
                while(num && final != 0){
                    printf("%c", final);
                    num--;
                }
                final = string[j];
            }else{
                num *= 10; 
                num += string[j] - 48;
            }
            j++;
        }

        while(num && final != 0){
            printf("%c", final);
            num--;
        }
        printf("\n");
    }
    return 0;
}
