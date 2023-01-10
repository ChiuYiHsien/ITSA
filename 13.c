#include <stdio.h>

int main(){
    int a, b, c, d;
    int min, fee;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    min = (c-a)*60 + (d-b);
    if (min <= 120) {
        fee = (min / 30) * 30;
    }
    else if (min <= 240) {
        fee = 120 + (min - 120) / 30 * 40;
    }
    else {
        fee = 120 + 160 + (min - 240) / 30 * 60;
    }
    printf("%d\n", fee);

    
    return 0;
}