#include <cstdio>
#include <iostream>
#include <set>

using namespace std;
int main(){
    string word;

    set<string> dictionary;
    while(getline(cin, word)){
        int i = 0;
        string w = "";
        while(word[i] != '\0'){
            if(word[i] >= 'A' && word[i] <= 'Z') word[i] += 32;

            if(word[i] >= 'a' && word[i] <= 'z') w += word[i];
            else{
                if(w.size()) dictionary.insert(w); 
                w = "";
            }
            i++;
        }
        if(w.size()) dictionary.insert(w); 
    }

    set<string>::const_iterator i = dictionary.begin();
    set<string>::const_iterator e = dictionary.end();
    for(; i != e; ++i){
        printf("%s\n", (*i).c_str());
    }
    return 0;
}
