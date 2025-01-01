// https://etutor2.itsa.org.tw/mod/topics/view.php?id=42599
#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int m;
        scanf("%d", &m);
        printf("%d %d %d\n", m, m * m, m * m * m);
    }
	return 0;
}
