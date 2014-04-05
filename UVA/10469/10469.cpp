#include <stdio.h>
#include <iostream>
#define T 32
using namespace std;

string toBinary(long decimal){
    string result = "00000000000000000000000000000000";
    string hold; 
    int i = 0;
    while(decimal > 0){
        hold += (decimal % 2) ?  '1' : '0';
        decimal /= 2;
        i++;
    }
    i--;
    while(i >= 0){
        result[(T - 1) - i] = hold[i];
        i--;
    }
    return result;
}

long exponentiation2(int exp){
    if(!exp) return 1;
    long total = 2;
    int i = 1;
    while(i++ < exp) total *= 2;
    return total;
}

long sum(string a, string b){
    int j = 0;
    int i = T - 1;
    string hold;
    while(i >= 0){
        if( (a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1') ) hold += '1';
        else hold += '0';
        i--;
    }
    long total = 0;
    i = T - 1;
    while(j <= i){
        if(hold[j] == '1') total += exponentiation2(j) * 1;
        j++;
    }
    return total;
}

int main(){
    string numberA, numberB;
    int i;
    long a, b; 
    a = b = 0; 
    while(scanf("%lu %lu", &a, &b) == 2){
        numberA = toBinary(a);
        numberB = toBinary(b);
        printf("%lu\n", sum(numberA, numberB));
    }
    return 0;
}
