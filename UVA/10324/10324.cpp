#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    string line;
    int c = 1;
    while(getline(cin, line) || !line.empty()){ 
        printf("Case %d:\n", c++);
        int count[1000001] = {0};
        int i = 0;
        int j = 0;

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

        int n = 0;
        for(scanf("%d\n", &n); n > 0; n--){
            scanf("%d %d\n", &i, &j);
            printf("%s\n", (count[i] == count[j]) ? "Yes" : "No");
        }
    }
    return 0;
}
