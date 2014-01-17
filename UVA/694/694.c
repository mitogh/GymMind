#include <stdio.h>

int main(){
    long a, l;
    int i = 1;

    while(scanf("%lu %lu", &a, &l) == 2){
       if(a < 0 && l < 0) break; 
       long ca = a; 
       long j = 1;
       while(1){
           if( ca == 1 || ca > l) break;
           ca = !(ca % 2) ?  (ca / 2) : (3 * ca + 1);
           j++;
       }

       if( ca > l ) j--;

       printf("Case %d: A = %lu, limit = %lu, number of terms = %lu\n", i++, a, l, j);
    }

    return 0;
}
