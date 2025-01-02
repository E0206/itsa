//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42612
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d days\n", a / (24 * 60 * 60));
    a = a % (24 * 60 * 60);
    printf("%d hours\n", a / (60 * 60));
    a = a % (60 * 60);
    printf("%d minutes\n", a / 60);
    a = a % 60;
    printf("%d seconds\n", a);
	return 0;
}
