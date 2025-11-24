#include <stdio.h>

int main () {
    int number;
    int evenSum = 0;
    int oddSum = 0;

    if ( scanf("%d", &number) != 1 ) {
        return 1; //  Input Error
    } // end if

    while ( number != 0 ) {
        if ( number % 2 == 0 ) { // Even number
            evenSum += number;
        } else { // Odd number
            oddSum += number;
        } // end if-else

        if ( scanf("%d", &number) != 1 ) {
            break;
        } // end if
    } // end while

    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    return 0;
}