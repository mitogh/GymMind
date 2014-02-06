#include <stdio.h>
#include <string.h>
int main(){
    int n, i, j, line, cn, max, k;
    char song[16][10];
    char names[102][128];

    strcpy(song[0], "Happy");
    strcpy(song[1], "birthday");
    strcpy(song[2], "to");
    strcpy(song[3], "you");
    strcpy(song[4], "Happy");
    strcpy(song[5], "birthday");
    strcpy(song[6], "to");
    strcpy(song[7], "you");
    strcpy(song[8], "Happy");
    strcpy(song[9], "birthday");
    strcpy(song[10], "to");
    strcpy(song[11], "Rujia");
    strcpy(song[12], "Happy");
    strcpy(song[13], "birthday");
    strcpy(song[14], "to");
    strcpy(song[15], "you");

    scanf("%d", &n);
    for(i = 0, cn = n; cn > 0; cn--){
        scanf("%s", names[i]);
        i++;
    }

    if(n <= 16) max = 16;
    else{
        max = n;
        while(max % 16 != 0) max++;
    }
    j = 0, k = 0, line = 0;
    while(k < max){
        if(line >= 16) line = 0;
        if(j >= n) j = 0;
        printf("%s: %s\n", names[j++], song[line++]);
        k++;
    }

    return 0;
}
