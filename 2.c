#include <stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    float c = a * b / 2;
    printf("%.1f\n", c);
    return 0;
}