//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42724
#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;
    scanf("%c", &a);
    if(a == 'a' ||a == 'e' ||a == 'i' ||a == 'o' ||a == 'u' ||a == 'A' ||a == 'E' ||a == 'I' ||a == 'O' ||a == 'U'){
        printf("母音\n");
    }
    else printf("子音\n");
	return 0;
}
