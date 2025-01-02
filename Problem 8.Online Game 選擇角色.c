//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42730
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("Person\n");
            break;
        case 2:
            printf("Fairy\n");
            break;
        case 3:
            printf("Dwarf\n");
            break;
        default:
            break;
    }
	return 0;
}
