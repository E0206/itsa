//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42619
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    double distance = pow(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)), 0.5);
    printf("%.2lf\n", distance);
	return 0;
}
