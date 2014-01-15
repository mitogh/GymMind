#include <stdio.h>

int main(){
    int n, i; 
    for(scanf("%d\n", &n), i = 1; n > 0; n--, i++){
        int currentDay, currentMonth, currentYear; 
        scanf("%d/%d/%d\n", &currentDay, &currentMonth, &currentYear);

        int birthDay, birthMonth, birthYear; 
        scanf("%d/%d/%d\n", &birthDay, &birthMonth, &birthYear);

        int yearAge = currentYear - birthYear;
        int monthAge = currentMonth - birthMonth; 
        int dayAge = currentDay - birthDay;

        int age = 0;

        if(yearAge >= 0){
            if(monthAge > 0){
                age = yearAge;
            }else if(monthAge == 0 && dayAge >= 0){
                age = yearAge;
            }else{
                age = yearAge - 1;
            }
        }

        printf("Case #%d: ", i);
        if(age < 0){
            printf("Invalid birth date\n");
        }else if(age <= 130){
            printf("%d\n", age);
        }else{
            printf("Check birth date\n");
        }
    }
}
