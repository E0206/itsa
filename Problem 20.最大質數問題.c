//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42614
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int check = 0;
    for(int i = n - 1; i > 1; i--){//往下找
        for(int j = 2; j < i; j++){//找質數
            if(i % j == 0){
                check = 0;
                break;
            }
            else{
                check = 1;
            }
        }
        if(check == 1){
            printf("%d\n", i);
            break;
        }
    }
	return 0;
}
