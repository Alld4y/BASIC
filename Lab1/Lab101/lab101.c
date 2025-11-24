#include <stdio.h>

// Lab101: Print "Hello Loop!" N times or "Error" if N is non-positive or 0

int main () {
    int N,i;
    if( scanf("%d", &N) > 0 && N > 0 ) {
        for ( i = 0 ; i < N ; i++ ) {
            printf("Hello Loop!\n");
        } // end for
    } // end if
    else {
        printf("Error\n");
    } // end else5
    return 0;
} // end main