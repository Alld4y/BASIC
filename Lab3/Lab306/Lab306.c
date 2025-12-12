/*
จงเขียนโปรแกรมภาษา C เพื่อพื่ รับรั ข้อมูลธุรกรรม N รายการ และคำ นวณสรุปยอดรวม
1. ประกาศโครงสร้าง (struct) ชื่อ Transaction ซึ่งซึ่มีสมาชิก 2 ตัว:
- description (คำ อธิบาย: char array ขนาด 50)
- amount (จำ นวนเงิน: float)
2. ในฟังฟัก์ชัน main ให้รับรั ค่า N (จำ นวนธุรกรรม)
3. ใช้ for loop เพื่อพื่ วนรับข้อมูลมู N ธุรกรรม (amount และ description)
4. ภายในลูป:
- ถ้า amount มีค่มี ค่า "มากกว่าหรือรื เท่ากับ 0.0" ถือเป็น รายรับ (Income) และสะสมใน totalIncome
- ถ้า amount มีค่มี ค่า "น้อยกว่า 0.0" ถือเป็น รายจ่าย (Expense) และสะสมค่าสัมบูรณ์ (Absolute Value) ใน totalExpense
5. หลังจากจบลูป ให้คำ นวณยอดคงเหลือสุทธิ (Net Balance = totalIncome - totalExpense)
6. แสดงผลลัพธ์ totalIncome, totalExpense, และ Net Balance
Pre-code
Code
struct Transaction {
 char description[50];
 float amount;
};
int main() {
 int N, i;
 float totalIncome = 0.0;
 float totalExpense = 0.0;
 float netBalance = 0.0;

 if (scanf("%d", &N) != 1) {
 return 1;
 }
 struct Transaction transactions[N];


 for (i = 0; i < N; i++) {

 if (scanf("%f %s", &transactions[i].amount, transactions[i].description) != 2) {
 return 1;
 }

 if (transactions[i].amount >= 0.0) {
 totalIncome += transactions[i].amount;
 } else {

 totalExpense += -transactions[i].amount;
 }
 }


 netBalance = totalIncome - totalExpense;
ฝ่าฝ่ ด่านเคราะห์ หน้าน้แรก คู่มืคู่ อมืการใช้งาน รายวิชา บัญชี ข้อมูลนศ. หัวข้อโปรเจค แจ้งปัญหา/ร้องเรียน
12/12/25, 10:27 PM BASIC Computer Programming
https://thailandfxwarrior.com/coding/course/basic/lab/3/6 1/3
Code

 printf("Total Income: %.2f\n", totalIncome);
 printf("Total Expense: %.2f\n", totalExpense);
 printf("Net Balance: %.2f\n", netBalance);
 return 0;
}
Test Case 1
Input Output
3
500.00 Salary
-50.50 Coffee
-100.00 Rent
Total Income: 500.00
Total Expense: 150.50
Net Balance: 349.50
Test Case 2
Input Output
4
1000.00 Deposit
-500.00 Withdraw
-500.00 Bills
10.00 Interest
Total Income: 1010.00
Total Expense: 1000.00
Net Balance: 10.00
Test Case 3
Input Output
1
-99.99 Fine
Total Income: 0.00
Total Expense: 99.99
Net Balance: -99.99
Test Case 4
Input Output
2
5.00 Tip
-10.00 Loss
Total Income: 5.00
Total Expense: 10.00
Net Balance: -5.00
*/

#include <stdio.h>

struct Transaction {
    char description[50];
    float amount;
};

int main() {
    int N, i;
    float totalIncome = 0.0;
    float totalExpense = 0.0;
    float netBalance = 0.0;

    if (scanf("%d", &N) != 1) {
        return 1;
    }
    struct Transaction transactions[N];

    for (i = 0; i < N; i++) {
        if (scanf("%f %s", &transactions[i].amount, transactions[i].description) != 2) {
            return 1;
        }

        if (transactions[i].amount >= 0.0) {
            totalIncome += transactions[i].amount;
        } else {
            totalExpense += -transactions[i].amount;
        }
    }

    netBalance = totalIncome - totalExpense;

    printf("Total Income: %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Net Balance: %.2f\n", netBalance);
    return 0;
}