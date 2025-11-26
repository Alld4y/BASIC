#include <stdio.h>

int main() {
    int N_MONTHS, month, successCount = 0;
    float dailyDeposit, monthlyTotal;

    if (scanf("%d", &N_MONTHS) != 1) {
        return 1;
    }

    for (month = 1; month <= N_MONTHS; month++) {
        monthlyTotal = 0.0;

        if (scanf("%f", &dailyDeposit) != 1) {
            return 1;
        }

        while (dailyDeposit != 0.00) {
            monthlyTotal += dailyDeposit;

            if (scanf("%f", &dailyDeposit) != 1) {
                return 1;
            }
        }

        printf("Month %d Total: %.2f\n", month, monthlyTotal);

        if (monthlyTotal >= 500.00) {
            successCount += 1;
        }
    }

    printf("Success Count: %d\n", successCount);

    return 0;
}
