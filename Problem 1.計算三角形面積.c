#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    double area = a * b / 2.0;
    printf("Triangle area:%.1lf\n", area);//四捨五入取到小數點第一位
    return 0;
}
