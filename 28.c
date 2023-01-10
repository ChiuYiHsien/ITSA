#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int last = 0;
    for (int i = 1; i <= a; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            if (last) {
                printf(" ");
            }
            printf("%d", i);
            last = 1;
        }
    }
    printf("\n");

    return 0;
}
