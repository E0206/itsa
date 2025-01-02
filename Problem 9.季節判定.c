//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42731
#include <stdio.h>
#include <stdlib.h>

int main() {
    int M;
    scanf("%d", &M);
    if(M >= 3 && M <= 5)printf("Spring\n");
    else if(M >= 6 && M <= 8)printf("Summer\n");
    else if(M >= 9 && M <= 11)printf("Autumn\n");
    else printf("Winter\n");
	return 0;
}
