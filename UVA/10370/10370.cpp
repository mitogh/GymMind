#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n; 
    for(scanf("%d", &n); n > 0; n--){
        int i; 
        int total; 
        float grades = 0;
        vector<float> final;
           
        for(scanf("%d", &i), total = i; i > 0; i--){
            float tmp; 
            scanf("%f", &tmp);
            final.push_back(tmp);
            grades += tmp; 
        }
        grades /= total;
        int pass = 0; 
        for(i = 0; i < total; i++){
            if(final[i] > grades){
               pass++;
            }
        }
        printf("%.3f%%\n", ((float)pass /total)*100);
        final.clear();
    }
   
    return 0;
}
