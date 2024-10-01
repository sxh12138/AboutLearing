// 素数判断（第二种办法：埃拉托斯特尼筛法（Sieve of Eratosthenes））
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// 使用埃拉托斯特尼筛法生成素数筛
void sieveOfEratosthenes(bool *prime,int n){
    memset(prime,true,sizeof(bool) * (n + 1));
    prime[0] = prime[1] = false;
    for(int p = 2;p * p <= n;p += 1){
        if (prime[p]){
            for(int i = p * p;i <= n;i += p){
                prime[i] = false;
            }
        }
    }
}
int main() {
    int start,end;
    printf("请输入区间的起始点：");
    scanf("%d", &start);
    printf("请输入区间的结束点：");
    scanf("%d", &end);
    // 确保区间足够大以包含所有可能的素数
    int size = end + 1;
    bool *prime = (bool *)malloc(size * sizeof(bool));
    if(prime == NULL) {
        printf("内存分配失败。\n");
        return 1;
    }
    sieveOfEratosthenes(prime, size - 1);
    printf("区间[%d, %d]内的素数有：\n",start,end);
    for(int i = start;i <= end;i += 1){
        if(prime[i]){
            printf("%d ", i);
        }
    }
    printf("\n");
    free(prime);
    return 0;
}