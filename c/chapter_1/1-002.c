// 求两个数的最大数
#include <stdio.h>
int max(int a,int b);
int max(int a,int b){
    int x;
    if(a > b){
        x = a;
    }
    else{
        x = b;
    }
    return x;
}
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",max(a,b));
    return 0;
}