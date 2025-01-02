//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42613

#include <stdio.h>
#include <stdlib.h>

/* recursive GCD */
int gcd(int a, int b){
    if(a % b == 0){
        return b;
    }
    else{
        return gcd(b, a % b);
    }
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(b, a));
    return 0;
}
