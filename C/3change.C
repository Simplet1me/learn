#include <stdio.h>
int main(){
    int price;
    printf("请输入金额:");
    scanf("%d",&price);
    printf("找回%d元\n",100-price);
    return 0; 
}