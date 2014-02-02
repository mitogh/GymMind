#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[1024];
    char b[1024];
    char c;

    while(scanf("%s %c %s", a, &c, b) == 3){
        printf("%s %c %s\n", a, c, b);
        double ra = atof(a); 
        double rb = atof(b); 
        if(ra > 2147483647) printf("first number too big\n");
        if(rb > 2147483647) printf("second number too big\n");
        if((c == '+' && (ra + rb) > 2147483647) || (c == '*' && (ra * rb) > 2147483647)) printf("result too big\n");
    }

    return 0;
}
