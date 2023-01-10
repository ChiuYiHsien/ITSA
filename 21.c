#include <stdio.h>

int main(){
    int n;
    long long ans = 1;
    scanf("%d", &n);
    while(n != 0){
        ans *= n;
        n -= 1;
    }
    printf("%lld\n", ans);
    return 0;
}