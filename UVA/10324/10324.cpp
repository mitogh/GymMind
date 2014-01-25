#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    string line;
    int c = 1;
    while(getline(cin, line) || !line.empty()){
        int n = 0;
        printf("Case %d:\n", c++);
        for(scanf("%d\n", &n); n > 0; n--){
            int a, b, min;
            scanf("%d %d\n", &a, &b);
            if(b < a){
                min = b;
                b = a;
                a = min;
            }
            int i;
            for(i = a; i <= b; i++){
                if(line[i] != line[a]) break;
            }

            if((i-1) == b) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
