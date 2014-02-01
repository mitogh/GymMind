#include <string.h>
#include <iostream>

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

    int carry = 0;
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

string fibo[5001];

string fib(int n){
    if(fibo[n].size() > 0) return fibo[n];
    else {
        string tmp = sum(fib(n - 1), fib(n - 2));
        fibo[n] = tmp;
        return tmp;
    }
}

int main(){
    int n;
    fibo[0] = "0"; 
    fibo[1] = "1";

    while(scanf("%d", &n) == 1) cout << "The Fibonacci number for " << n << " is " << fib(n) << "\n";

    return 0;
}
