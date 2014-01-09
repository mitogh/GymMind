#include <stdio.h>
#include <string.h>

int main(){
    int n; 
    scanf("%d\n", &n);

    while(n--){
        int k;
        int prices[256] = {0};
        memset(prices, 0, sizeof(prices));
        for(scanf("%d\n", &k); k > 0; k--){
            unsigned char index; 
            int price;
            scanf("%c %d\n", &index, &price);
            prices[(int)index] = price;
        }   
        
        int lines;
        int total = 0;
        scanf("%d\n", &lines); 
        while(lines){
            int c = getchar();
            total += prices[c]; 
            if(c == '\n'){
                lines--;
            }
        }
        printf("%d.%.2d$\n", total/100, total % 100);
    }
    return 0;
}
