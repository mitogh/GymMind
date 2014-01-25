#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    string line;
    int c = 1;
    while(getline(cin, line) || !line.empty()){
        int n = 0;
        printf("Case %d:\n", c++);
        int count[1000001] = {0};
        int i = 0;
        int j = i;
        count[i] = j;
        char c = line[i++];
        while(line[i] != '\0'){
            if(line[i] != c){
                c = line[i];
                j++;
            }
            count[i] = j;
            i++;
        }

        for(scanf("%d\n", &n); n > 0; n--){
            int a, b, min;
            scanf("%d %d\n", &a, &b);
            printf("%s\n", (count[a] == count[b]) ? "Yes" : "No");
        }
    }
    return 0;
}
