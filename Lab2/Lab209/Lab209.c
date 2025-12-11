#include <stdio.h>

void receiveStock(int quantity, int *currentStock) {
    *currentStock += quantity;
    printf("Receive %d units\n", quantity);
}

void shipStock(int quantity, int *currentStock, float PENALTY_FEE, float *totalPenalties) {
    if (quantity <= 0) {
        printf("Error: Quantity must be positive.\n");
        return;
    }
    if (quantity <= *currentStock) {
        *currentStock -= quantity;
        printf("Shipped %d units\n", quantity);
        return;
    }
    *totalPenalties += PENALTY_FEE;
    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", PENALTY_FEE);
}

void displayStatus(int currentStock, float totalPenalties) {
    printf("Current Stock: %d\n", currentStock);
    printf("Total Penalties: %.2f\n", totalPenalties);
}

int main() {
    int initialStock, N, cmdCode, quantity, i;
    float PENALTY_FEE;
    float totalPenalties = 0.0;
    int currentStock;

    if (scanf("%d %f %d", &initialStock, &PENALTY_FEE, &N) != 3) {
        return 1;
    }

    currentStock = initialStock;

    for (i = 0; i < N; i++) {
        if (scanf("%d %d", &cmdCode, &quantity) != 2) {
            break;
        }

        switch (cmdCode) {
            case 1:
                receiveStock(quantity, &currentStock);
                break;
            case 2:
                shipStock(quantity, &currentStock, PENALTY_FEE, &totalPenalties);
                break;
            case 3:
                displayStatus(currentStock, totalPenalties);
                break;
            default:
                printf("Error: Invalid command.\n");
        }
    }

    return 0;
}
