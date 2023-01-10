#include <stdio.h>


int main() {
    int a;
    int sum = 0;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        if(i%12==0) continue;
        else if(i%2==0 && i%3==0) sum+=i;
    }

    printf("%d\n", sum);
    return 0;
}
