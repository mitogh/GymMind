#include <stdio.h>

int main(){
    
    while(1){
        int nCases = 0; 
        scanf("%d", &nCases);

        if(nCases == 0) break;

        int n, m; 
        scanf("%d %d", &n, &m);
        for(; nCases > 0; nCases--){
            int x = 0;
            int y = 0;

            scanf("%d %d", &x, &y);

            if(x > n && y > m){
                printf("NE\n");
            }else if(x < n && y > m){
                printf("NO\n");
            }else if(x < n && y < m){
                printf("SO\n");
            }else if(x > n && y < m){
                printf("SE\n");
            }else{
                printf("divisa\n");
            }
        }
    }
    return 0; 
}
