//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42725
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int check = 0;
    scanf("%d", &n);

    if (n < 2) {
        printf("NO\n");
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            check = 1;
            break;
        }
    }

    if (check == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");  
    }

    return 0;
}
