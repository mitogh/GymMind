#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int reverse_number(int original);
bool is_prime(int number);

int main(){
    int n;

    while( scanf("%d", &n) != EOF ){
        if( is_prime(n) ){
            int reversed = reverse_number(n);
            if(n != reversed && is_prime(reversed)){
                printf("%d is emirp.\n", n);
            }else{
                printf("%d is prime.\n", n);
            }
        }else{
            printf("%d is not prime.\n", n);
        }
    }
    return 0;
}

bool is_prime(int number){
    if(number <= 3){
        return number > 1;
    }else if(number % 2 == 0 || number % 3 == 0){
        return false;
    }else{
        for(int i = 5; i * i <= number; i += 6){
            if(number % i == 0 || number % (i + 2) == 0){
                return false;
            }
        }
        return true;
    }
}

int reverse_number(int original){
    string number_to_string = to_string(original);
    int length = number_to_string.size() - 1;
    string reversed = number_to_string;

    for(int i = 0, j = length; i < j; i++, j--){
        reversed[i] = number_to_string[j];
        reversed[j] = number_to_string[i];
    }
    return atoi(reversed.c_str());
}
