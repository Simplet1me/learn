#include<stdio.h>
int main(){
    int s,v,cost,h,min;
    printf("请输入路程和速度\n");
    scanf("%d %d",&s,&v);
    if (s%v==0){
        cost = s/v+10;
    }else{
        cost = s/v+10+1;
    }
    if (cost > 480){
        h = (1440-cost+480)/60;
        min = (1440-cost+480)%60;
    }else{
        h = (480-cost)/60;
        min = (480-cost)%60;
    }
    printf("%02d:%02d",h,min);
    return 0;
}