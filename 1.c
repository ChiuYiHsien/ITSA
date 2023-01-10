#include <stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float d = (a + b) * c / 2;
    printf("Trapezoid area:%.1f\n", d);
    return 0;
}