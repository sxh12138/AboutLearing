// 求阶乘（基础版，只能求 12 及以下数的阶乘）
#include <stdio.h>
int facorial(int n);
int facorial(int n){
    int i,fact = 1;
    for(i = 1;i <= n;i += 1){
        fact *= i;
    }
    return fact;
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d\n",facorial(n));
    return 0;
}