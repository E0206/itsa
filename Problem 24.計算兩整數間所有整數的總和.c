//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42618
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int total = 0;
    scanf("%d", &num);
    for(int j = 0; j < num; j++){
        int a, b;
        scanf("%d%d", &a, &b);
        //printf("%d%d", a, b);
        if(a < b){
            for(int i = a; i <= b; i++){
                total += i;
            }
        }
        else if(a > b){
            for(int i = b; i <= a; i++){
                total += i;
            }
        }
        printf("%d\n", total);
        total = 0;
    }
    
	return 0;
}
