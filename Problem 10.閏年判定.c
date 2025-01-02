//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42732
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a % 400 == 0)printf("Bissextile Year\n");
    else if(a % 4 == 0 && a % 100 != 0)printf("Bissextile Year\n");
    else printf("Common Year\n");
	return 0;
}
