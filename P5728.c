#include<stdio.h>
int main(){
    int N;//输入正整数N
    scanf("%d",&N);
    int score[N][3];//二维数组,N行3列

    int cn,math,eng;
    for(int i = 1;i <= N;i++){//将第i行恩人的炉石、影之诗、游戏王成绩放入二维数组
        scanf("%d %d %d",&cn,&math,&eng);
        score[i-1][0] = cn;
        score[i-1][1] = math;
        score[i-1][2] = eng;
    }

    int friends = 0;//恩人数量
    for(int i = 0;i < N;i++){//通过i，j进行恩人配对，j一直比i大1，确保每个人都能见到不同的恩人
        int totali,totalj,cptotal,cp1,cp2,cp3;//避免if判断时出现过长的运算
        totali = score[i][0] + score[i][1] + score[i][2];//恩人i的总分
        for(int j = i + 1;j < N;j++){
            totalj = score[j][0] + score[j][1] + score[j][2];//恩人j的总分
            cptotal = totali - totalj;//判断总分是否能够成为恩人用的
            cp1 = score[i][0] - score[j][0];//判断炉石是否能成为恩人
            cp2 = score[i][1] - score[j][1];//判断影之诗
            cp3 = score[i][2] - score[j][2];//判断游戏王
            if((cptotal<=10 && cptotal >=-10) && (cp1 <= 5 && cp1 >= -5) && (cp2 <= 5 && cp2 >= -5) && (cp3 <= 5 && cp3 >= -5)){
                friends++;//恩人加1
            }
        }
    }
    printf("%d\n",friends);//赫赫，恩人太多了
    return 0;
}