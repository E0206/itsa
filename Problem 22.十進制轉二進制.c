//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42616
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    int b = 128;
    scanf("%d", &a);
    if(a < 0){
        a += 256;
    }
    while(b > 0){
            printf("%d", a / b);
            a %= b;
            b /= 2;
        }
        printf("\n");
	return 0;
}
