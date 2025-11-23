#include <stdio.h>

int main () {
    int N,i;
    scanf("%d", &N);
    if(N > 0) {
        for (i = 0 ; i < N ; i++ ) {
            printf("Hello Loop!\n");
        }
    }
    else {
        printf("Error");
    }
    return 0;
}