//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42723
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a > 0)printf("正數\n");
    else if(a == 0)printf("0\n");
    else printf("負數\n");
	return 0;
}
