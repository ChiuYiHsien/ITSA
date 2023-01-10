#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a*a+b*b > 10000){
        printf("outside\n");
    }
    else{
        printf("inside\n");
    }
    return 0;
}