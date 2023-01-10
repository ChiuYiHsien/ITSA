
#include <stdio.h>

int prime(int x){
    if (x == 2) return 0;
    for (int i = 2; i < x; i++){
        if (x % i == 0){
            return 1;
        }
    }
    return 0;
}

int main(){

    int a , b;
    scanf("%d", &a);
    if(prime(a) == 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}