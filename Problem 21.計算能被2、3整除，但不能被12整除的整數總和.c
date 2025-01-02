//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42615
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int  total = 0;
    for(int i = 0; i < a; i++){
        if(i % 2 == 0 && i % 3 == 0 && i % 12 != 0){
            total += i;
        }
    }
    printf("%d\n", total);
	return 0;
}
