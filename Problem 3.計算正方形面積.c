//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42594
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        double w;
        scanf("%lf", &w);
        double area = w * w;
        area = round(area*10)/10;
        printf("%.1lf\n", area);
    }
	return 0;
}
