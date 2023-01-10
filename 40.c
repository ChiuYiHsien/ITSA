#include <stdio.h>

int main() {
    int a, sum = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        printf("%d ", i);
        sum += i;
        if(i == a) printf("= ");
        else printf("+ ");
    }
    printf("%d\n", sum);
    return 0;
}
