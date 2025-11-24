#include <stdio.h>

int main () {
    int number;

    do {
        printf("Enter a number (1-10): ");
        if ( scanf("%d", &number) != 1 ) { // Input error
            break;
        }else if ( number < 1 || number > 10 ) {
            printf("Error: Value must be 1-10\n");
        } // end if-else
    } while ( number < 1 || number > 10 ); // end do-while

    printf("Input accepted: %d\n", number);
    return 0;
}