#include<stdio.h>
int main(){
    int m,t,s;//几个苹果；吃一个用多久；一共吃了多久
    scanf("%d %d %d",&m,&t,&s);

    int result;
    if(t == 0){
        printf("0\n");
    }else if(m >= 1 && s >= 1){
        result = m - (s + t - 1) / t;//向上取整
        if(result <= 0){//如果结果小于等于0，输出0
            printf("0\n");
        }else{
            printf("%d\n",result);
        }
    }
    return 0;
}