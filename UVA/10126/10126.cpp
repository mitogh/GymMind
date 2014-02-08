#include <stdio.h>
#include <string>
#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    int n = 0, i, flag, c = 0, f = 0;
    string line;
    string word;
    string tmp;
    map<string, int> words;
    set<string> final;
    
    while(getline(cin, line)){
        if(line.empty()) continue;
        i = 0;
        word = "";
        tmp = "";
        while(line[i] != '\0'){
            if(line[i] == '\n' || !tmp.compare("EndOfText") ) break;
            
            if(line[i] >= 'A' && line[i] <= 'Z'){
                word += line[i] + 32;
                tmp += line[i];
            }else if(line[i] >= 'a' && line[i] <= 'z'){
                word += line[i];
                tmp += line[i];
            }else if(!f && line[i] >= '0' && line[i] <= '9'){
                n *= 10;
                n += line[i] - '0';
            }else{
                if(!word.empty()) words[word] += 1;
                word = "";
            }
            i++;
        }


        if(!tmp.compare("EndOfText")){
            tmp = "";
            f = 0;
            if(c > 0) printf("\n");
            for( map<string, int>::iterator ii = words.begin(), ee = words.end(); ii != ee; ++ii){
                if((*ii).second == n) final.insert((*ii).first);
            }

            set<string>::const_iterator fi = final.begin();
            set<string>::const_iterator fe = final.end();
            flag = 0;
            for(; fi != fe; ++fi){
                printf("%s\n", (*fi).c_str());
                flag = 1;
            }
            if(!flag) printf("There is no such word.\n");
            c++;

            words.clear();
            final.clear();
            n = 0;
        }else{
            words[word] += 1;
            f++;
        }
    }
    return 0;
}
