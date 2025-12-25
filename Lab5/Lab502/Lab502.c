#include <stdio.h>
struct Employee {
    int id;
    int gross_salary;
    int bonus;
    int total_income;
};

int calculate_net_salary(int total_income);

int main() {
    struct Employee emp;
    int net_salary;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Gross Salary: ");
    scanf("%d", &emp.gross_salary);

    printf("Enter Bonus: ");
    scanf("%d", &emp.bonus);

    emp.total_income = emp.gross_salary + emp.bonus;

    net_salary = calculate_net_salary(emp.total_income);

    printf("\n--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", emp.id);
    printf("Gross Salary: %d\n", emp.gross_salary);
    printf("Bonus: %d\n", emp.bonus);
    printf("Total Income: %d\n", emp.total_income);
    printf("Net Salary: %d\n", net_salary);
    return 0;
}

int calculate_net_salary(int total_income) {
    int tax;
    if (total_income > 30000) {
        tax = total_income * 10 / 100;
    } else {
        tax = total_income * 5 / 100;
    }
    return total_income - tax;
}