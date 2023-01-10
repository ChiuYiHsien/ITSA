#include <stdio.h>

int main(){
    int a, b;
    double s = 0;
    scanf("%d %d", &a, &b);
    if(a <= 60){
        s += a * b;
    }
    else if(a <= 120){
        s += 60 * b + (a - 60) * b * 1.33;
    }
    else{
        s += 60 * b + 60 * b * 1.33 + (a - 120) * b * 1.66;
    }
    printf("%.1lf\n", s);
    return 0;
}