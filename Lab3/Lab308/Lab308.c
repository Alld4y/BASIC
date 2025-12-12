#include <stdio.h>

struct Campaign {
    char name[50];        // Campaign name
    float productPrice;   // Price per product
    int salesCount;       // Number of sales
    float adSpend;        // Advertising cost
};

float getCommissionRate(int salesCount) {   // Return rate based on sales
    if (salesCount >= 20) return 0.20;
    if (salesCount >= 10) return 0.15;
    return 0.10;
}

int main() {
    int N;
    scanf("%d", &N);      // Read number of campaigns

    struct Campaign campaigns[N];

    for (int i = 0; i < N; i++) {
        float commissionRate;
        float totalRevenue;
        float totalCommission;
        float netProfitLoss;

        // Read input for each campaign
        if (scanf("%49s %f %d %f",
                campaigns[i].name,
                &campaigns[i].productPrice,
                &campaigns[i].salesCount,
                &campaigns[i].adSpend) != 4) {
            return 1;
        }

        totalRevenue = campaigns[i].salesCount * campaigns[i].productPrice;  // Total revenue
        commissionRate = getCommissionRate(campaigns[i].salesCount);         // Determine rate
        totalCommission = totalRevenue * commissionRate;                     // Commission amount
        netProfitLoss = totalCommission - campaigns[i].adSpend;              // Net profit/loss

        // Output results
        printf("--- Campaign: %s ---\n", campaigns[i].name);
        printf("Sales: %d, Ad Spend: %.2f\n", campaigns[i].salesCount, campaigns[i].adSpend);
        printf("Rate Used: %.0f%%\n", commissionRate * 100);
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n",
               totalRevenue, commissionRate * 100, campaigns[i].adSpend, netProfitLoss);
        printf("Net Result: %.2f\n", netProfitLoss);
    }

    return 0;
}
