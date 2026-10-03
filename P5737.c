#include<stdio.h>
#include <stdbool.h>

bool leap(int year){
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        return true;
    }else{
        return false;
    }
}

int main(){
    //起始年份x，终止年份y
    int x,y;
    scanf("%d %d",&x,&y);

    int year = x;//标尺
    int span = y - x + 1;//中间间隔多少年
    int count = 0;//记录有多少个闰年
    int leap_year[span];
    int i = 0;

    //用循环判断这段时间有多少个闰年，并把闰年按顺序存入数组
    for(;year <= y;year++){
        bool judge = leap(year);
        if(judge){
            count++;
            leap_year[i] = year;
            i++;
        }
    }
    printf("%d\n",count);
    for(int j = 0; j < count; j++){
        printf("%d ",leap_year[j]);
    }
    printf("\n");

    return 0;
}