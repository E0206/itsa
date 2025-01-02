// https://etutor2.itsa.org.tw/mod/topics/view.php?id=42602
#include <stdio.h>
#include <stdlib.h>

int main() {
    double c;
    scanf("%lf", &c);
    double f = c * 9 / 5 + 32;
    printf("%.1lf\n", f);
	return 0;
}
