// https://etutor2.itsa.org.tw/mod/topics/view.php?id=42604
#include <stdio.h>
#include <stdlib.h>

int main() {
    double w, h;
    scanf("%lf%lf", &w, &h);
    double BMI;
    BMI = w / ((h / 100) * (h / 100));
    printf("%.2lf\n", BMI);
	return 0;
}
