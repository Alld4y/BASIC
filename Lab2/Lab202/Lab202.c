#include <stdio.h>

int main () {
    int N, i, quantity;
    float unitPrice, grandTotal = 0.0;

    if ( scanf("%d", &N) != 1 ) {
        return 1;
    }

    for ( int i = 0 ; i < N ; i++ ) {
        scanf("%f %d", &unitPrice, &quantity);
        if ( unitPrice >= 1000 ) {
            grandTotal += ( unitPrice - ( unitPrice * 0.10 ) ) * quantity;
        } else {
            grandTotal += unitPrice * quantity;
        }
    }

    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}