//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42606
#include <stdio.h>
#include <stdlib.h>

int main() {
    int min;
    scanf("%d", &min);
    if(min <= 800)printf("%.1lf\n", 0.9 * min);
    else if(min > 800 && min < 1500)printf("%.1lf\n", min * 0.9 * 0.9);
    else printf("%.1lf\n", min * 0.9 * 0.79);
	return 0;
}
