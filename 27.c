#include <stdio.h>

int main(){
    int a, b;
    int ans = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        ans += i;
    }
    printf("%d\n", ans);
    return 0;
}