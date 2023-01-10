
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
    for (int i = 3; i < a; i++){
        if(prime(i) == 0){
            b = i;
        }
    }
    printf("%d\n", b);
    return 0;
}

