#include <stdio.h>


int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d[3]; d[0] = a; d[1] = b; d[2] = c;

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(d[i] > d[j]){
                int temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }

    if(d[0] + d[1] > d[2]) printf("fit\n");
    else printf("unfit\n");

    return 0;
}
