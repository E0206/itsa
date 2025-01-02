//https://etutor2.itsa.org.tw/mod/topics/view.php?id=42611
#include <stdio.h>
#include <stdlib.h>

int main() {
    int time, salary;
    double total = 0;
    scanf("%d%d", &time, &salary);
    if(time <= 60)printf("%d\n", salary * time);
    else if(time > 60 && time <= 120)printf("%.1lf\n", 60 * salary + (time - 60) * salary * 1.33);
    else printf("%.1lf\n", 60 * salary + 60 * salary * 1.33 + (time - 120) * salary * 1.66);
	return 0;
}
