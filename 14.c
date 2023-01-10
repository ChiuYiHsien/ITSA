#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    printf("%d days\n", a/86400);
    printf("%d hours\n", (a%86400)/3600);
    printf("%d minutes\n", ((a%86400)%3600)/60);
    printf("%d seconds\n", ((a%86400)%3600)%60);

    return 0;
}