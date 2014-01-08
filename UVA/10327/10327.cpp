#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    while(scanf("%d", &n) == 1){
        
        vector<int> numbers; 
        for(int i = 0; i < n; i++){
            int tmp;
            scanf("%d", &tmp);
            numbers.push_back(tmp);
        }
        
        int count = 0;
        if(n > 1){
            int i;
            int j;
            for(i = 0; i < n - 1; i++){
                for(j = i + 1; j < n; j++){
                    if(numbers[i] > numbers[j]){
                        count++;
                    }
                }
            }
        }

        printf("Minimum exchange operations : %d\n", count);
        numbers.clear();
    }
    return 0;
}
