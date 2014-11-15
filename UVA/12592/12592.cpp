#include <cstdio>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int main(){
    int n = 0;

    scanf("%d\n", &n);

    string slogan;
    string chorus;

    map<string, string> values;

    for(int i = 0, j = n; i < j; i++){
        getline(cin, slogan);
        getline(cin, chorus);
        values.insert( pair<string, string>(slogan, chorus) );
    }

    int q = 0;
    scanf("%d\n", &q);
    while(q-- > 0){
        getline(cin, slogan);
        cout << values[slogan] << endl;
    }

    return 0;
}
