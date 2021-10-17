#include <stdio.h>

int is_a_prime_number(int num){
    int res = 1;
    int i;

    for(i = 2 ; i <= num-1 ; i++){
        if(num%i == 0){
            res = 0;
        }
    }

    return res;
}

int main(){

    int in;
    int result;

    printf("Enter a naturel number :");
    scanf("%d", &in);

    result = is_a_prime_number(in);

    if(result == 1){
        printf("\nYour number (%d) is a prime number.", in);
    }else{
        printf("\nYour number (%d) is not a primer number.", in);
    }

    return 0;
}