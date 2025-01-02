//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42729
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int max = -101;
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        if(num > max)max = num;
    }
    printf("%d\n", max);
	return 0;
}
