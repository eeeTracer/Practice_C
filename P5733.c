#include<stdio.h>
int main(){
    char str[101];
    scanf("%100s",str);

    for(int i = 0;str[i] != '\0';i++){
        if(str[i] <= 'z' && str[i] >= 'a'){
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("%s\n",str);
    return 0;
}