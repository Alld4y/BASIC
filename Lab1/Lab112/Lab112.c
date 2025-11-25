#include <stdio.h>

int main () {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;

    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        return 1;
    }

    if ( planCode == 1 ) {
        totalBill = 299;
        if ( dataUsage_GB > 10 ) {
            totalBill = totalBill + 10 * ( dataUsage_GB - 10 );
        }
    } else if ( planCode == 2 ) {
        totalBill = 599;
        if ( dataUsage_GB > 20 ) {
            totalBill = totalBill + 5 * ( dataUsage_GB - 20 );
        }
    }

    if (planCode == 1 || planCode == 2) {
        printf("%.2f\n", totalBill);
    } else {
        printf("Invalid Plan Code\n");
    }

    return 0;
}