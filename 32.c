#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    int b[3];
    b[0] = a/100; b[1] =(a%100)/10; b[2] = (a%100)%10;

    if(a == b[0]*b[0]*b[0] + b[1]*b[1]*b[1] + b[2]*b[2]*b[2]) printf("Yes\n");
    else printf("No\n");

    return 0;
}
