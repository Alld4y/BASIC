#include <stdio.h>

int main () {
    int N, sum = 0, i;

    if (scanf("%d", &N) != 1) { 
        return 1; // Input Error
    } else {
        for ( i = 1 ; i <= N ; i++ ) {
            sum += i;
        } // end for
    } // end if-else
    
    printf("%d\n", sum);
    return 0;
}