#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d*%d=%d\n", i, i, i*i);
    }
    return 0;
}