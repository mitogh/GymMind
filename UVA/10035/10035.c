#include <stdio.h>
#include <string.h>

int main(){
    char a[11];
    char b[11];

    while(scanf("%s %s", a, b) == 2){
        if(a[0] == '0' && b[0] == '0') break;

        short i = strlen(a) - 1;
        short j = strlen(b) - 1;
        short carry = 0;
        short count = 0;
        short sum = 0;

        while(i >= 0 || j >= 0){
            sum = 0;
            if( i >= 0 )    sum += a[i] - 48;
            if( j >= 0 )    sum += b[j] - 48;
            if( carry ){
                sum += carry;
                carry = 0;
            }
            if( sum > 9)    carry = 1; 

            if(carry) count++;
            else carry = 0;
            i--;
            j--;
        }
        
        if(count == 1) printf("%hd carry operation.\n", count);  
        else if(count > 1) printf("%hd carry operations.\n", count);  
        else printf("No carry operation.\n");
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
    }
}
