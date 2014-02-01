#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string sum(string a, string b){
    int len_a = a.size();
    int len_b = b.size();

    if(!len_a &&  len_b) return b;
    if(!len_b &&  len_a) return a;

    string tmp;
    if(len_b > len_a){
        int t = len_a;
        len_a = len_b;
        len_b = t;
        tmp = a;
        a = b;
        b = tmp;
    }
    tmp = a;
    int j = len_a;
    tmp[j--] = '\0';
    len_a--;
    len_b--;
    
    short carry = 0;
    while(len_a >= 0){
        int sum = 0;
        sum += (int)a[len_a--] - 48;
        if(len_b >= 0) sum += (int)b[len_b--] - 48;

        sum += carry;
        if(sum < 10){
            tmp[j--] = sum + 48;
            carry = 0;
        }else{ 
            tmp[j--] = (sum - 10) + 48;
            carry = 1;
        }
    }
    if(carry) return (char)(carry + 48) + tmp;
    else return tmp;
}

string fib(int n){
    if(n <= 0){
        return "0";
    }

    string a = "1";
    string b = "1";

    int i = 2;
    for(; i < n; i++){
        string tmp = a; 
        a = b; 
        b = sum(tmp, b);
    }
    return b;
}

int main(){
    int i, k,n;

    for(n = 0; n <= 5000; n++) cout << "fibo[" << n << "] = \"" << fib(n) << "\";" << endl;

    return 0;
}  
