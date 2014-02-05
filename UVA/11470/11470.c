#include <stdio.h>

int main(){
    int n, i, j, k, sum, c = 1; 
    int grid[11][11] = {0};

    while(scanf("%d", &n) && n){
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++) scanf("%d", &grid[i][j]);

        printf("Case %d:", c);
        i = 0;
        j = 0;
        sum = 0;
        for(i = 0, k = 0; i < n; i++, k++){
            for(j = k; j < n; j++){
                if(j < n) sum += grid[i][j];
                if(j + 1 < n) sum += grid[j + 1][i];
                if(j + 1 < n - 1) sum += grid[n - 1][j + 1];
                if(j + 1 < n) sum += grid[j + 1][n - 1];
            }
            printf(" %d", sum);
            n -= 1;
            sum = 0;
        }
        printf("\n");
        c++;
    }
    return 0;
}
