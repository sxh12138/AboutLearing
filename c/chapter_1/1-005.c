// 素数判断
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n);
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    else if(n <= 3){
        return true;
    }
    else{
        if(n % 2 == 0 || n % 3 == 0){
            return false;
        }
        for(int i = 5; i * i <= n; i += 6){
            if(n % i ==0 || n % (i + 2) == 0){
                return false;
            }
        }
    }
    return true;
}
int main(void){
    int n;
    scanf("%d",&n);
    if(isPrime(n)){
        printf("Yes!\n");
    }
    else{
        printf("No!\n");
    }
    return 0;
}