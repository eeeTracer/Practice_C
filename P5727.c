#include<stdio.h>
int main()
{
    int n;//输入一个正整数n
    scanf("%d",&n);

    int a[1000];
    int count = 0;
    a[0] = n;//未处理的n作为数组的第一个元素
    while(n != 1){//对n处理后计数加1，将处理后的n依次放入数组
        if(n % 2 == 1){
            n = n * 3 + 1;
        }else{
            n /= 2;
        }
        count++;
        a[count] = n;
    }

    for(;count > 0;count--){
        printf("%d ",a[count]);
    }
    printf("%d\n",a[0]);
    return 0;
}