#include <stdio.h>

int main(){
    float U, H;
    short F, D;

    while(1){
        scanf("%f %f %hd %hd", &H, &U, &D, &F);
        if(!H){
            break;
        }

        float total = 0; 
        float pDown = ((float)F/100) * U; 
        short flag = 1;
        short success = 0;
        int days = 0;

        while(flag){
            days++;
            if(days > 1 && U >= 0 ){
                U -= pDown;
            }

            if(U >= 0){
                total = total + U;
            }

            if(total > H){
                success = 1;
                flag = 0;
            }
            total -= D;
            if(total < 0){
                flag = 0;
            }
        }
        if(success){
            printf("success on day %d\n", days);
        }else{
            printf("failure on day %d\n", days);
        }
    }
    return 0;
}
