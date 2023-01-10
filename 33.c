
#include <stdio.h>

int factor(int x){
    int sum = 0;
    for(int i = 1; i < x; i++){
        if(x % i == 0){
            sum += i;
        }
    }

    return sum;
}

int main(){
    int a, flag = 0;
    scanf("%d", &a);
    for(int i = 1; i <=a ; i++){
        if(i == factor(i)){
            if(flag){
                printf(" ");
            }
            printf("%d", i);
            flag = 1;
        }
    }
    printf("\n");
    return 0;
}