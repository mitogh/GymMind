#include <stdio.h>
#include <iostream>

using namespace std;

int realLength(string number){
    int i  = 0; 
    int count = 0;
    while(number[i] != '\0'){
        if(number[i] >= '0' && number[i] <= '9') count++;
        i++;
    }
    return count;
}

int isPalindrome(string number){
    int start = 0;
    int end = realLength(number);
    int i = 0;
    int f = end / 2;
    end--;

    if(!end) return 1; 
    while(i < f){
        if(number[start++] != number[end--]) return 0;
        i++;
    }
    return 1;
}

string reverse(string number){
    string result = number;
    int start = realLength(number) - 1;
    int i = 0;

    while(start >= 0){
        result[i++] = number[start--];
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
    return total;
}

int main(){
    string number;
    string tmp;
    int i = 0;
    int j, n, k;

    for(scanf("%d\n", &n), k = 0; k < n; k++){
        getline(cin, number, '\n');
        j = 1;
        while(j <= 1000){
            tmp = add(number, reverse(number));
            number = tmp;
            if(isPalindrome(tmp)){
                break;
            }
            j++;
        }
        cout << j << " " << number << endl;
    }
    return 0;
}
