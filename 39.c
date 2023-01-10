#include <stdio.h>


int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b > c && a+c > b && b+c > a) {
        if(a*a + b*b == c*c) printf("Right Triangle\n");
        else if (a*a + b*b < c*c) printf("Obtuse Triangle\n");
        else if (a*a + b*b > c*c) printf("Acute Triangle\n");
    }
    else printf("Not Triangle\n");
    return 0;
}
