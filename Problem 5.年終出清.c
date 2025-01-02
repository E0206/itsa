//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42727
#include <stdio.h>
#include <stdlib.h>

int main() {
    int p;
    scanf("%d", &p);
    if(p < 10)printf("%d\n", (int)(p * 100));
    else if(p >= 10 && p < 30)printf("%d\n", (int)(p * 100 * 0.9));
    else if(p >= 30 && p < 100)printf("%d\n", (int)(p * 100 * 0.8));
    else printf("%d\n", (int)(p * 100 * 0.7));
	return 0;
}
