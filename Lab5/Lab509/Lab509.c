#include <stdio.h>

struct Product {
    int item_id;
    float cost_price;
    float sell_price;
    int stock_quantity;
};

float calculate_total_profit(float cost, float sell, int qty);
float calculate_profit_percentage(float cost, float sell);
int string_id_to_int(char str[]);

int main() {
    struct Product item;
    float total_profit;
    float profit_percent;
    
    char string_item_id[10];

    printf("Enter Item ID: ");
    scanf("%s", string_item_id);

    item.item_id = string_id_to_int(string_item_id);

    printf("Enter Cost Price per unit: ");
    scanf("%f", &item.cost_price);

    printf("Enter Sell Price per unit: ");
    scanf("%f", &item.sell_price);
    printf("Enter Stock Quantity: ");
    scanf("%d", &item.stock_quantity);

    total_profit = calculate_total_profit(item.cost_price, item.sell_price, item.stock_quantity);
    profit_percent = calculate_profit_percentage(item.cost_price, item.sell_price);

    printf("\n--- INVENTORY PROFIT REPORT ---\n");
    printf("Item ID: %d\n", item.item_id);
    printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n", item.cost_price, item.sell_price, item.stock_quantity);
    printf("Total Profit: %.2f\n", total_profit);
    printf("Profit Percentage: %.2f%%\n", profit_percent);

    if (total_profit > 0) {
        printf("Status: Profit!\n");
    } else if (total_profit < 0) {
        printf("Status: Loss!\n");
    } else {
        printf("Status: Break Even.\n");
    }

    return 0;
}

float calculate_total_profit(float cost, float sell, int qty) {
    float unit_profit = sell - cost;
    return unit_profit * qty;
}

float calculate_profit_percentage(float cost, float sell) {
    float unit_profit = sell - cost;
    return (unit_profit / cost) * 100;
}

int string_id_to_int(char str[]) {
    int result = 0;
    int length = 0;
    int final_result = 0;
    for(int count = 1 ; str[count] != '\0' ; count++)
        length = count;
    for (int i = 1 ; str[i] != '\0' ; i++) {
        result = 0;
        result += ((int)str[i] - 48);
        for(int pow = 0 ; pow < length - i ; pow++) {
            result *= 10;
        }
        final_result += result;
    }
    return final_result;
}