//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42605
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int distance;
    scanf("%d", &distance);
    double speed = 1 - 30 * 2.54 / 100.0;
    double ans = distance / speed;
    if(ans-floor(ans)>0){
        ans = floor(ans) + 1;
        printf("%.0f\n", ans);
    }
        
    else
        printf("%.0f\n", ans);
	return 0;
}
