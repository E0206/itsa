//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42593
#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double area = (a + b) * c / 2.0;
    printf("Trapezoid area:%.1lf\n", area);
    return 0;
}
