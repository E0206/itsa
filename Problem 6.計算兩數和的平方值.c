//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42597
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num; 
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", (a + b) * (a + b));
    }
	return 0;
}
