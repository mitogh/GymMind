#include <stdio.h>
#include <iostream>
#include <map>
#define L 26
#define a 'a'
using namespace std;
map<string, int>values;

void fill(){
    int v = 1;
    string key;
    for(int i = 0; i < L; i++, v++){
        key.insert(0, 1, a + i);
        values[key] = v;
        key = "";
    }
    for(int i = 0; i < L; i++){
        for(int j = i + 1; j < L; j++, v++){
            key.insert(0, 1, a + i);
            key.insert(1, 1, a + j);
            values[key] = v;
            key = "";
        }
    }
    for(int i = 0; i < L; i++){
        for(int j = i + 1; j < L; j++){
            for(int h = j + 1; h < L; h++, v++){
                key.insert(0, 1, a + i);
                key.insert(1, 1, a + j);
                key.insert(2, 1, a + h);
                values[key] = v;
                key = "";
            }
        }
    }
    for(int i = 0; i < L; i++){
        for(int j = i + 1; j < L; j++){
            for(int h = j + 1; h < L; h++){
                for(int k = h + 1; k < L; k++, v++){
                    key.insert(0, 1, a + i);
                    key.insert(1, 1, a + j);
                    key.insert(2, 1, a + h);
                    key.insert(3, 1, a + k);
                    values[key] = v;
                    key = "";
                }
            }
        }
    }
    for(int i = 0; i < L; i++){
        for(int j = i + 1; j < L; j++){
            for(int h = j + 1; h < L; h++){
                for(int k = h + 1; k < L; k++){
                    for(int l = k + 1; l < L; l++, v++){
                        key.insert(0, 1, a + i);
                        key.insert(1, 1, a + j);
                        key.insert(2, 1, a + h);
                        key.insert(3, 1, a + k);
                        key.insert(4, 1, a + l);
                        values[key] = v;
                        key = "";
                    }
                }
            }
        }
    }
}
int main(){
    string line;
    fill();
    while(getline(cin, line, '\n')){
        if(values.find(line) != values.end()){
            printf("%d\n", values[line]);
        }else{
            printf("0\n");
        }
    }
    return 0;
}
