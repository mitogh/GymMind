#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int toDecimal(char a){
    if(a >= '0' && a <= '9') return a - '0';
    return 0;
}
char toChar(int n){
    if(n >= 0 && n <= 9) return '0' + n;
    return '0';
}
string add(string a, string b){
    int len_a = a.size() - 1;
    int len_b = b.size() - 1;

    string total = "0";

    int sum = 0;
    while(len_a >= 0 || len_b >= 0 || sum){
        if(len_b >= 0)  sum += (int)b[len_b--] - '0';
        if(len_a >= 0)  sum += (int)a[len_a--] - '0';
        total.insert(total.begin(), (sum % 10) + '0');
        sum /= 10;
    }
    return total;
}

string product(string a, string b){
    int len_a = a.size() - 1;
    int len_b = b.size() - 1;
    string total = "0";
    string tmp;
    int tmp_s;
    if(len_a < len_b){
        tmp = b;
        b = a;
        a = tmp;
        tmp_s = len_b;
        len_b = len_a;
        len_a = tmp_s;
    }

    int i = 0;
    int r = 0;
    int carry = 0;
    int next = 0;
    string result;
    while(len_b >= 0){
        tmp_s = len_a;
        i = toDecimal(b[len_b]);
        carry = 0;
        result = "";
        for(int k = next; k > 0; k--) result.insert(result.begin(), '0');
        while(tmp_s >= 0){
            r = i * toDecimal(a[tmp_s]);
            if(carry) r += carry;
            if(r > 9){
                carry = r / 10;
                r = r % 10;
            }
            else carry = 0;
            
            result.insert(result.begin(), toChar(r));
            tmp_s--;
        }
        if(carry) result.insert(result.begin(), toChar(carry));
        total = add(result, total);
        len_b--;
        next++;
    }
    return total;
}

int main(){
    string a, b;
    while(getline(cin, a) && getline(cin, b)){
        cout << product(a,b) << endl;
    }
    return 0;
}
