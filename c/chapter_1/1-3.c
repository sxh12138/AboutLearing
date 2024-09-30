// 求 1-100 内的偶数和
#include <stdio.h>
int main(void){
    int i,sum = 0;
    for(i = 1;i <= 100;i += 1){
        if(i % 2 == 0){
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 0;
}