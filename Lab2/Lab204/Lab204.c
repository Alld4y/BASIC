#include <stdio.h>

int main() {
    float principal, monthlyPayment, interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01f;
    const float PENALTY = 10.0f;

    if (scanf("%f %f", &principal, &monthlyPayment) != 2) {
        return 1;
    }

    while (principal > 0) {
        if (monthCount >= 10) {
            printf("Loan settled in 10+ months.");
            break;
        }

        interest = principal * INTEREST_RATE;
        principal = principal + interest;
        principal = principal - monthlyPayment;

        if (monthlyPayment < interest) {
            principal = principal + PENALTY;
        }

        printf("Month %d: Remaining %.2f\n", monthCount + 1, principal);
        monthCount = monthCount + 1;
    }

    if (principal < 10) {
        printf("Loan settled in %d months.\n", monthCount);
    }

    return 0;
}
