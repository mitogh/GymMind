#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int main(){
    long n; 
    stack<int>binary; 

    while(true){
        scanf("%lu", &n);
        if(!n){
            break;
        }
        while(n){
            binary.push(n % 2);
            n /= 2;
        }

        int count = 0; 
        printf("The parity of ");
        while(!binary.empty()){
            short tmp = binary.top();

            printf("%d", tmp);
            if(tmp){
                count++; 
            }
            binary.pop();
        }
        printf(" is %d (mod 2).\n", count);
    }
    return 0;
}
