#include <stdio.h>

int main(){
    short n, m;
    int c = 1;
    while(scanf("%hd %hd\n", &n, &m) == 2 && n && m){
        char matrix[101][101];
        short i, j;
        if(c > 1) printf("\n");
        for(i = 0; i < n; i++){
            scanf("%s\n", matrix[i]);
        }

        printf("Field #%d:\n", c);
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                int count = 0;
                if(matrix[i][j] == '*'){
                    printf("*");
                    continue;
                }
                if(j + 1 != m && matrix[i][j + 1] == '*') count++;
                if(j - 1 >= 0 && matrix[i][j - 1] == '*') count++;
                if(i + 1 != n && matrix[i + 1][j] == '*') count++;
                if(i - 1 >= 0 && matrix[i - 1][j] == '*') count++;
                if(j + 1 != m && i - 1 >= 0 && matrix[i - 1][j + 1] == '*') count++;
                if(j - 1 >= 0 && i - 1 >= 0 && matrix[i - 1][j - 1] == '*') count++;
                if(j + 1 != m && i + 1 >= 0 && matrix[i + 1][j + 1] == '*') count++;
                if(j - 1 >= 0 && i + 1 >= 0 && matrix[i + 1][j - 1] == '*') count++;

                printf("%d", count);
            }
            printf("\n");
        }
        c++;
    }
    return 0;
}
