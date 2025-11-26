#include <stdio.h>

int main () {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;

    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        return 1;
    }

    if ( planCode == 1 ) {
        if ( dataUsage_GB > 10 ) {
            totalBill = 299 + 10 * ( dataUsage_GB - 10 );
        } else if ( dataUsage_GB <= 20 ) {
            totalBill = 299;
        }
    } else if ( planCode == 2 ) {;
        if ( dataUsage_GB > 20 ) {
            totalBill = 599 + 5 * ( dataUsage_GB - 20 );
        } else if ( dataUsage_GB <= 20 ) {
            totalBill = 599;
        }
    }

    if (planCode == 1 || planCode == 2) {
        printf("Total Bill: %.2f\n", totalBill);
    } else {
        printf("Invalid Plan Code\n");
    }

    return 0;
}