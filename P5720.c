#include<stdio.h>
int main()
{
    int a;//输入一个正整数a
    scanf("%d",&a);

    int count = 1;
    while(a != 1){
        a = a / 2;
        count++;
    }

    printf("%d\n",count);
    return 0;
}