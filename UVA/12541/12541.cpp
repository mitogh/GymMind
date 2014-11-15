#include <cstdio>
#include <iostream>

using namespace std;

void copy_char(char *from, char *destiny);
int compare_age(int _day, int _month, int _year, 
        int day, int month, int year);

int main(){
    int cases = 0;

    scanf("%d", &cases);

    char person_name[16];
    int day = 0;
    int month = 0;
    int year = 0;

    char oldest_person[16];
    char youngest_person[16];

    int result = 0;
    int max_age = 0;
    int min_age = 0;


    int i = 0;
    while(cases-- > 0){
        scanf("%s %d %d %d", person_name, &day, &month, &year);

        result = year * 10000 + month * 100 + day;

        if(result > max_age){
            copy_char(person_name, oldest_person);
            max_age = result;
        }
        if( i == 0){
                copy_char(person_name, youngest_person);
                min_age = result;
        } else {
            if(result < min_age){
                copy_char(person_name, youngest_person);
                min_age = result;
            }
        }
        i++;
    }
    printf("%s\n", oldest_person);
    printf("%s\n", youngest_person);
    return 0;
}

void copy_char(char *from, char *destiny){
    int i = 0;
    while(from[i] != '\0'){
        destiny[i] = from[i];
        i++;
    }
    destiny[i] = '\0';
}
