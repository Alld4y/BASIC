#include <stdio.h>

int main () {
    int categoryCode;
    float price_before_vat;
    float totalBill = 0.0;
    float vatAmount = 0.0;

    if (scanf("%f %d", &price_before_vat, &categoryCode) != 2) {
        return 1;
    }

    switch ( categoryCode ) {
        case 1 : // 7%
            totalBill = price_before_vat + ( price_before_vat * 0.07 );
            break;
        case 2 : // 0%
            totalBill = price_before_vat;
            break;
        case 3 : // 15%
            totalBill = price_before_vat + ( price_before_vat * 0.15 );
            break;
    }

    if (categoryCode >= 1 && categoryCode <= 3) {
        vatAmount = totalBill - price_before_vat;
        printf("VAT Amount: %.2f\n", vatAmount);
        printf("Total Price: %.2f\n", totalBill);
    } else {
        printf("Invalid Category\n");
    }

    return 0;
}