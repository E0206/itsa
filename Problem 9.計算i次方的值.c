// https://etutor2.itsa.org.tw/mod/topics/view.php?id=42600
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int power;
        scanf("%d", &power);
        int result = 1;
        if(power > 31)printf("Value of more than 31\n");
        else {
            for(int j = 0; j < power; j++){
                result *= 2;
            }
            printf("%d\n", result);
        }
    }
	return 0;
}
