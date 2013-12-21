#include <stdio.h>

int main(){
    int a, f, n,x;
    
    scanf("%d", &n);

    for( x = 0; x<n; x++){
        if(x>0)
            printf("\n");

        scanf("%d\n%d", &a, &f);

        int t; 
        for(t = 0; t < f; t++){
            if(t>0)
                printf("\n");

            int i;
            for( i = 1; i <= a; i++){
                int j;
                for(j = 1; j <= i; j++){
                    printf("%d", i);
                }
                printf("\n");
            }
            for( i -= 2; i > 0; i--){
                int j; 
                for(j = 1; j <= i; j++){
                    printf("%d", i);
                }
                printf("\n");
            }
        }
    }
    return 0; 
}
