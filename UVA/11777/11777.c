#include <stdio.h>

int main(){
    int test; 
    int i; 

    for(scanf("%d", &test), i = 1; test > 0; i++, test--){
        int term1, term2, final, attendance, class_test1, class_test2, class_test3; 
        
        scanf("%d %d %d %d %d %d %d", &term1, &term2, &final, &attendance, &class_test1, &class_test2, &class_test3);
        
        int min = class_test1; 
        double total = 0; 
        total = term1 + term2 + final + attendance; 
        min = min < class_test2 ? min : class_test2;
        min = min < class_test3 ? min : class_test3;

        total += (class_test1 + class_test2 + class_test3 - min) / 2.0;

        printf("Case %d: ", i);

        if(total >= 90){
            printf("A\n");
        }else if(total >= 80){
            printf("B\n");
        }else if(total >= 70){
            printf("C\n");
        }else if(total >= 60){
            printf("D\n");
        }else{
            printf("F\n");
        }
    }
    return 0;
}
