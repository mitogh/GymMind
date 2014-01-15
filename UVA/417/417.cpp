#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    string line;

    while(getline(cin, line)){

        int i = 0;
        int count = 0;
        int rond = 0;

        while(line[i] != '\0'){
            if( i > 0 ){
                if((line[i] - line[i-1]) == 1){
                    cout << line[i] - 96 + rond<< " <->";
                }else{
                    count = 0; 
                    break;
                }
            }else{
                count += (int) line[i] - 96;
            }
            cout << "****" << line[i] - 96 << "***\n";
            rond += 25;
            i++;
        }
        cout << count << "\n";
    }
    return 0;
}
