#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);

    for(int i = 1; a >= i && b >= i; i++){
        if(a%i == 0 && b%i == 0){
            c = i;
        }
    }
    printf("%d\n", c);
    return 0;
}