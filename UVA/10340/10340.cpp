#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
int main(){
    string s, t;
    while(getline(cin, s, ' ') && getline(cin, t, '\n')){
        int i = 0, j = 0;
        int count = 0;
        int l = s.size(); 
        while(s[i] != '\0'){
            while(t[j] != '\0'){
                if(s[i] == t[j++]){
                    count++;
                    break;
                }
            }
            if(l == count) break;
            else i++;
        }

        printf("%s\n", (l == count) ? "Yes" : "No");
        s[0] = 0;
        t[0] = 0;
    }
    return 0;
}
