#include<stdio.h>
#include<math.h>

//计算点 (x, y) 到点 (xed, yed) 的距离
double distance(double x,double y,double xed,double yed){
    double result = sqrt((xed - x) * (xed - x) + (yed - y) * (yed - y));
    return result;
}
int main(){
    //分别读入三个点的坐标
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    scanf("%lf %lf",&x3,&y3);

    //构造一个函数distance用来计算两点之间的距离
    double re1 = distance(x1,y1,x2,y2);
    double re2 = distance(x2,y2,x3,y3);
    double re3 = distance(x3,y3,x1,y1);

    double result = re1 + re2 + re3;
    printf("%.2lf\n",result);
    return 0;
}