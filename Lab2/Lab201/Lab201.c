#include <stdio.h>

int main () {
    int N,i;
    if ( scanf("%d", &N) > 0 && N > 0 ) {
        for ( i = 0 ; i < N ; i++ ) {
            printf("Hello Loop!\n");
        }
    } else {
        printf("Error\n");
    }
    return 0;
}