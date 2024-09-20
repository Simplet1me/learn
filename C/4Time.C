#include<stdio.h>
int main(){
    int h1,m1,h2,m2,t1,t2;
    printf("请输入第一时间：");
    scanf("%d %d",&h1,&m1);
    printf("请输入第二时间：");
    scanf("%d %d", &h2,&m2);
    t1 = h1*60+m1;
    t2 = h2*60+m2;
    printf("时间差为：%d:%02d",(t2-t1)/60,(t2-t1)%60);
}