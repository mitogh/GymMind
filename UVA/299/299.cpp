#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    short l; 

    for(scanf("%hd", &l); l > 0; l--){
        int n; 
        vector<int> numbers;
        for(scanf("%d", &n); n > 0; n--){ 
            int tmp = 0;
            scanf("%d", &tmp);
            numbers.push_back(tmp);
        }

        int size = numbers.size();
        int done = 0;
        int train = 0;
        
        while(!done){
            done = 1;
            for(int i = 0; i < size - 1; i++){
                if(numbers[i] > numbers[i+1]){
                    int tmp = numbers[i];
                    numbers[i] = numbers[i+1];
                    numbers[i+1] = tmp;
                    done = 0;
                    train++;
                }
            }
            size--;
        }
        
        printf("Optimal train swapping takes %d swaps.\n", train);
        numbers.clear();
    }
    
    return 0;
}
