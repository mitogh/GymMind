#include <stdio.h>
#include <iostream>

using namespace std;

int len(string input){
    int i = 0, c = 0;
    while(input[i] != '\0'){
        if(input[i] >= '0' && input[i] <= '9') c++;
        i++;
    }
    return c;
}

string clean(string original){
    int l = len(original);
    int i = 0;
    int f = 0;
    string result = "";
    while(i < l){
        if(!f && original[i] > '0'){
            result += original[i];
            f = 1;
        }else if(f){
            result += original[i];
        }
        i++;
    }
    return result;
}
string reverse(string original){
    int l = len(original);
    string result = "";
    while(l){
        result += original[l -1];
        l--;
    }
    return result;
}

string add(string a, string b){
    int len_a = a.size() - 1;
    int len_b = b.size() - 1;
    string total = "";

    int sum = 0;
    while(len_a >= 0 || len_b >= 0 || sum){
        if(len_b >= 0)  sum += (int)b[len_b--] - '0';
        if(len_a >= 0)  sum += (int)a[len_a--] - '0';
        total.insert(total.begin(), (sum % 10) + '0');
        sum /= 10;
    }
    sum = 0;
    int flag = 1;
    while(total[sum] != '\0'){
        if(total[sum] != '0'){
            flag = 0;
            break;
                                        }
            sum++;
    }
    if(flag) return "0";
    else return total;
}

int main(){
    int n;
    string a, b;
    scanf("%d\n", &n);
    while(n > 0){
        getline(cin, a, ' ');
        getline(cin, b, '\n');
        cout << clean(reverse(add(reverse(a), reverse(b)))) << endl; 
        n--;
    }
    return 0;
}
