// 求 1-100 内的能被 6 整除的数的和
#include <stdio.h>
int main(void){
    int i,sum = 0;
    for(i = 1;i <= 100;i += 1){
        if(i % 6 == 0){
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\n");
    printf("%d\n",sum);
    return 0;
}