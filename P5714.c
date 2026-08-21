#include<stdio.h>
int main(){
    double m,h;
    scanf("%lf %lf",&m,&h);

    double bmi;
    if(m >= 40 && m <= 120 && h >= 1.4 && h <= 2.0){//边界条件
        bmi = m / (h * h);
        if(bmi < 18.5){
            printf("Underweight\n");
        }else if(bmi >= 18.5 && bmi < 24){
            printf("Normal\n");
        }else if(bmi >= 24){
            printf("%.6g\n",bmi);
            printf("Overweight\n");
        }
    }

    return 0;
}