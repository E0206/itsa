//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42610
#include <stdio.h>
#include <stdlib.h>

int main() {
    int hour_1, min_1, hour_2, min_2;
    scanf("%d%d%d%d", &hour_1, &min_1, &hour_2, &min_2);
    int total_min = ((hour_2 * 60 + min_2) - (hour_1 * 60 + min_1)) / 30;
    if(total_min <= 4)printf("%d\n", total_min * 30);
    else if(total_min <= 8 && total_min > 4)printf("%d\n", 30 * 4 + (total_min - 4) * 40);
    else printf("%d\n", 30 * 4 + 40 * 4 + (total_min - 8) * 60);
	return 0;
}
